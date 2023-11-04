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
  std::vector<Scope> scopes;
 public:
  NameSpace() {
    scopes.emplace_back();
  }
  bool InGlobalScope() {
    return scopes.size() == 1;
  }
  void addScope() {
    scopes.emplace_back();
  }
  void popScope() {
    scopes.pop_back();
  }
  void assign(const std::string &name, const VariablePtr &var) {
    auto it_global = scopes.front().find(name);
    if (it_global != scopes.front().end()) {
      *it_global->second = *var;
    } else {
      scopes.back()[name] = var;
    }
  }
  VariablePtr get(const std::string &name) {
    auto it_cur = scopes.back().find(name);
    if (it_cur != scopes.back().end()) {
      return it_cur->second;
    }
    auto it_global = scopes.front().find(name);
    if (it_global != scopes.front().end()) {
      return it_global->second;
    }
    throw std::runtime_error("NameError: name '" + name + "' is not defined");
    return nullptr;
  }
};

#endif //PYTHON_INTERPRETER_INCLUDE_SCOPE_SCOPE_H_
