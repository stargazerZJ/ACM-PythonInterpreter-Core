//
// Created by zj on 11/4/2023.
//

#ifndef PYTHON_INTERPRETER_INCLUDE_SCOPE_SCOPE_H_
#define PYTHON_INTERPRETER_INCLUDE_SCOPE_SCOPE_H_

#include <stdexcept>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>
#include "variable.h"

class NameSpace {
 private:
  using Scope = std::unordered_map<std::string, VariablePtr>;
  std::vector<Scope> scopes_;
 public:
  NameSpace() {
    scopes_.emplace_back();
  }
  bool InGlobalScope() {
    return scopes_.size() == 1;
  }
  void addScope() {
    scopes_.emplace_back();
  }
  void popScope() {
    scopes_.pop_back();
  }
  void assign(const std::string &name, const VariablePtr &var) {
    auto it_global = scopes_.front().find(name);
    if (it_global != scopes_.front().end()) {
      it_global->second = var;
    } else {
      scopes_.back()[name] = var;
    }
  }
  VariablePtr get(const std::string &name) {
    auto it_cur = scopes_.back().find(name);
    if (it_cur != scopes_.back().end()) {
      return it_cur->second;
    }
    auto it_global = scopes_.front().find(name);
    if (it_global != scopes_.front().end()) {
      return it_global->second;
    }
    throw std::runtime_error("NameError: name '" + name + "' is not defined");
    return nullptr;
  }
  VariablePtr get(lvalueTuple &lvalue) {
    auto res = std::vector<VariablePtr>();
    res.reserve(lvalue.size());
    for (auto &name : lvalue) {
      res.push_back(get(name));
    }
    return static_cast<VariablePtr>(std::make_shared<PyTuple>(res));
  }
  void assign(lvalueTuple &lvalue, const VariablePtr &var) {
    auto tuple = std::dynamic_pointer_cast<PyTuple>(var);
    if (tuple == nullptr) {
      throw std::runtime_error("TypeError: can only assign an iterable");
    }
    if (tuple->value.size() != lvalue.size()) {
      if (tuple->value.size() > lvalue.size()) {
        throw std::runtime_error("ValueError: too many values to unpack (expected " +
            std::to_string(lvalue.size()) + ")");
      } else {
        throw std::runtime_error("ValueError: not enough values to unpack (expected " +
            std::to_string(lvalue.size()) + ", got " + std::to_string(tuple->value.size()) + ")");
      }
    }
    for (auto i = 0; i < lvalue.size(); ++i) {
      assign(lvalue[i], tuple->value[i]);
    }
  }
  std::string printVariables() {
    // for debugging
    auto res = std::string();
    res += "== Global Scope ==\n";
    for (auto &item : scopes_.front()) {
      res += item.first + " = " + item.second->toString().value + "\n";
    }
    if (!InGlobalScope()) {
      res += "== Local Scope ==\n";
      for (auto &item : scopes_.back()) {
        res += item.first + " = " + item.second->toString().value + "\n";
      }
    }
    res += "==================\n";
    return res;
  }
};

#endif //PYTHON_INTERPRETER_INCLUDE_SCOPE_SCOPE_H_
