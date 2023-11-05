//
// Created by zj on 11/4/2023.
//

#ifndef PYTHON_INTERPRETER_INCLUDE_SCOPE_VARIABLE_H_
#define PYTHON_INTERPRETER_INCLUDE_SCOPE_VARIABLE_H_

#include <stdexcept>
#include <memory>
#include <string>
#include <vector>
#include "int2048.h"
#include "Python3ParserBaseVisitor.h"

struct VariableBase;
struct PyInt;
struct PyFloat;
struct PyString;
struct PyBool;
struct PyNone;
struct PyTuple;
struct PyFunc;
struct PyFuncArgs;
struct PyFlow;

using VariablePtr = std::shared_ptr<VariableBase>;
using int2048 = high_precision::int2048;
using lvalueTuple = std::vector<std::string>;

struct VariableBase {
  virtual ~VariableBase() = default;
  void raiseTypeError(const VariableBase &rhs) const;
  void raiseTypeError() const;
  [[nodiscard]] virtual std::string typeName() const;
  [[nodiscard]] virtual PyInt toInt() const;
  [[nodiscard]] virtual PyFloat toFloat() const;
  [[nodiscard]] virtual PyString toString() const;
  [[nodiscard]] virtual PyBool toBool() const;
  [[nodiscard]] virtual bool isNumeric() const;
  [[nodiscard]] virtual VariablePtr add(const VariableBase &rhs) const;
  [[nodiscard]] virtual VariablePtr sub(const VariableBase &rhs) const;
  [[nodiscard]] virtual VariablePtr mul(const VariableBase &rhs) const;
  [[nodiscard]] virtual VariablePtr div(const VariableBase &rhs) const;
  [[nodiscard]] virtual VariablePtr floor_div(const VariableBase &rhs) const;
  [[nodiscard]] virtual VariablePtr mod(const VariableBase &rhs) const;
  [[nodiscard]] virtual bool lessThan(const VariableBase &rhs) const;
  [[nodiscard]] virtual bool equal(const VariableBase &rhs) const;
};

struct PyInt : public VariableBase {
  explicit PyInt(const std::string &value) : value(value) {}
  explicit PyInt(long long value) : value(value) {}
  explicit PyInt(const int2048 &value) : value(value) {}
  int2048 value;
  [[nodiscard]] std::string typeName() const override;
  [[nodiscard]] PyInt toInt() const override;
  [[nodiscard]] PyFloat toFloat() const override;
  [[nodiscard]] PyString toString() const override;
  [[nodiscard]] PyBool toBool() const override;
  [[nodiscard]] bool isNumeric() const override;
  [[nodiscard]] VariablePtr add(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr sub(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr mul(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr div(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr floor_div(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr mod(const VariableBase &rhs) const override;
  [[nodiscard]] bool lessThan(const VariableBase &rhs) const override;
  [[nodiscard]] bool equal(const VariableBase &rhs) const override;
};

struct PyFloat : public VariableBase {
  explicit PyFloat(double value) : value(value) {}
  double value;
  [[nodiscard]] std::string typeName() const override;
  [[nodiscard]] PyInt toInt() const override;
  [[nodiscard]] PyFloat toFloat() const override;
  [[nodiscard]] PyString toString() const override;
  [[nodiscard]] PyBool toBool() const override;
  [[nodiscard]] bool isNumeric() const override;
  [[nodiscard]] VariablePtr add(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr sub(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr mul(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr div(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr floor_div(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr mod(const VariableBase &rhs) const override;
  [[nodiscard]] bool lessThan(const VariableBase &rhs) const override;
  [[nodiscard]] bool equal(const VariableBase &rhs) const override;
};

struct PyString : public VariableBase {
  explicit PyString(std::string value) : value(std::move(value)) {}
  std::string value;
  [[nodiscard]] std::string typeName() const override;
  [[nodiscard]] PyInt toInt() const override;
  [[nodiscard]] PyFloat toFloat() const override;
  [[nodiscard]] PyString toString() const override;
  [[nodiscard]] PyBool toBool() const override;
  [[nodiscard]] VariablePtr add(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr mul(const VariableBase &rhs) const override;
  [[nodiscard]] bool lessThan(const VariableBase &rhs) const override;
  [[nodiscard]] bool equal(const VariableBase &rhs) const override;
};

struct PyBool : public VariableBase {
  explicit PyBool(bool value) : value(value) {}
  bool value;
  [[nodiscard]] std::string typeName() const override;
  [[nodiscard]] PyInt toInt() const override;
  [[nodiscard]] PyFloat toFloat() const override;
  [[nodiscard]] PyString toString() const override;
  [[nodiscard]] PyBool toBool() const override;
  [[nodiscard]] bool isNumeric() const override;
  [[nodiscard]] VariablePtr add(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr sub(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr mul(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr div(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr floor_div(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr mod(const VariableBase &rhs) const override;
  [[nodiscard]] bool lessThan(const VariableBase &rhs) const override;
  [[nodiscard]] bool equal(const VariableBase &rhs) const override;
};

struct PyNone : public VariableBase {
  [[nodiscard]] std::string typeName() const override;
  [[nodiscard]] PyString toString() const override;
  [[nodiscard]] PyBool toBool() const override;
  [[nodiscard]] bool equal(const VariableBase &rhs) const override;
};

struct PyTuple : public VariableBase {
  explicit PyTuple() = default;
  explicit PyTuple(std::vector<VariablePtr> value) : value(std::move(value)) {}
  std::vector<VariablePtr> value;
  [[nodiscard]] std::string typeName() const override;
  [[nodiscard]] PyString toString() const override;
  [[nodiscard]] PyBool toBool() const override;
  [[nodiscard]] VariablePtr add(const VariableBase &rhs) const override;
  [[nodiscard]] VariablePtr mul(const VariableBase &rhs) const override;
  [[nodiscard]] bool lessThan(const VariableBase &rhs) const override;
  [[nodiscard]] bool equal(const VariableBase &rhs) const override;
};

struct PyFlow {
  enum class Type {
    BREAK,
    CONTINUE,
    RETURN,
  };
  explicit PyFlow(Type type) : type(type), value(nullptr) {}
  explicit PyFlow(Type type, std::any value) : type(type), value(std::move(value)) {}
  Type type;
  std::any value;
};

#endif //PYTHON_INTERPRETER_INCLUDE_SCOPE_VARIABLE_H_
