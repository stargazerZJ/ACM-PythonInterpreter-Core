//
// Created by zj on 11/4/2023.
//

#include "variable.h"
void VariableBase::raiseTypeError(const VariableBase &rhs) const {
  throw std::runtime_error("TypeError: unsupported operand type(s) for " + typeName() + " and "
                               + rhs.typeName());
}
VariablePtr VariableBase::add(const VariableBase &rhs) const {
  raiseTypeError(rhs);
  return nullptr;
}
PyInt VariableBase::toInt() const {
  raiseTypeError();
  return PyInt(0);
}
PyFloat VariableBase::toFloat() const {
  raiseTypeError();
  return PyFloat(0);
}
PyString VariableBase::toString() const {
  raiseTypeError();
  return PyString("");
}
PyBool VariableBase::toBool() const {
  raiseTypeError();
  return PyBool(false);
}
VariablePtr VariableBase::sub(const VariableBase &rhs) const {
  raiseTypeError(rhs);
  return nullptr;
}
VariablePtr VariableBase::mul(const VariableBase &rhs) const {
  raiseTypeError(rhs);
  return nullptr;
}
VariablePtr VariableBase::div(const VariableBase &rhs) const {
  raiseTypeError(rhs);
  return nullptr;
}
VariablePtr VariableBase::floor_div(const VariableBase &rhs) const {
  raiseTypeError(rhs);
  return nullptr;
}
VariablePtr VariableBase::mod(const VariableBase &rhs) const {
  raiseTypeError(rhs);
  return nullptr;
}
bool VariableBase::lessThan(const VariableBase &rhs) const {
  raiseTypeError(rhs);
  return false;
}
bool VariableBase::equal(const VariableBase &rhs) const {
  raiseTypeError(rhs);
  return false;
}
bool VariableBase::isNumeric() const {
  return false;
}
std::string VariableBase::typeName() const {
  return "'VariableBase'";
}
void VariableBase::raiseTypeError() const {
  throw std::runtime_error("TypeError: unsupported argument type " + typeName());
}
std::vector<VariablePtr> VariableBase::matchParams(FunctionCallArgs call_args) const {
  raiseTypeError();
  return {};
}

VariablePtr PyInt::add(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return std::make_shared<PyInt>(value + rhs_int->value);
  } else if (dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return toFloat().add(rhs);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return std::make_shared<PyInt>(value + rhs_bool->toInt().value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
PyString PyInt::toString() const {
  return PyString(value.toString());
}
VariablePtr PyInt::sub(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return std::make_shared<PyInt>(value - rhs_int->value);
  } else if (dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return toFloat().sub(rhs);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return std::make_shared<PyInt>(value - rhs_bool->toInt().value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
PyFloat PyInt::toFloat() const {
  return PyFloat(value.toDouble());
}
PyInt PyInt::toInt() const {
  return *this;
}
PyBool PyInt::toBool() const {
  return PyBool(value.toBool());
}
VariablePtr PyInt::mul(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return std::make_shared<PyInt>(value * rhs_int->value);
  } else if (dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return toFloat().mul(rhs);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return std::make_shared<PyInt>(value * rhs_bool->toInt().value);
  } else if (auto rhs_string = dynamic_cast<const PyString *>(rhs_ptr)) {
    return rhs_string->mul(*this);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
bool PyInt::isNumeric() const {
  return true;
}
VariablePtr PyInt::div(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return std::make_shared<PyFloat>(toFloat().value / rhs.toFloat().value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
VariablePtr PyInt::floor_div(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return std::make_shared<PyInt>(value / rhs_int->value);
  } else if (dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return toFloat().floor_div(rhs);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return std::make_shared<PyInt>(value / rhs_bool->toInt().value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
VariablePtr PyInt::mod(const VariableBase &rhs) const {
  return sub(*(floor_div(rhs)->mul(rhs)));
}
bool PyInt::lessThan(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return value < rhs_int->value;
  } else if (dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return toFloat().lessThan(rhs);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return value < rhs_bool->toInt().value;
  } else {
    raiseTypeError(rhs);
    return false;
  }
}
bool PyInt::equal(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return value == rhs_int->value;
  } else if (dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return toFloat().equal(rhs);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return value == rhs_bool->toInt().value;
  } else {
    raiseTypeError(rhs);
    return false;
  }
}
std::string PyInt::typeName() const {
  return "'int'";
}
VariablePtr PyFloat::add(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return add(rhs_int->toFloat());
  } else if (auto rhs_float = dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return std::make_shared<PyFloat>(value + rhs_float->value);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return std::make_shared<PyFloat>(value + rhs_bool->value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
PyString PyFloat::toString() const {
  return PyString(std::to_string(value));
}
VariablePtr PyFloat::sub(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return sub(rhs_int->toFloat());
  } else if (auto rhs_float = dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return std::make_shared<PyFloat>(value - rhs_float->value);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return std::make_shared<PyFloat>(value - rhs_bool->value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
PyInt PyFloat::toInt() const {
  return PyInt(static_cast<long long>(value));
}
PyFloat PyFloat::toFloat() const {
  return *this;
}
PyBool PyFloat::toBool() const {
  return PyBool(static_cast<bool>(value));
}
bool PyFloat::isNumeric() const {
  return true;
}
VariablePtr PyFloat::mul(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return std::make_shared<PyFloat>(value * rhs.toFloat().value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
VariablePtr PyFloat::div(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return std::make_shared<PyFloat>(value / rhs.toFloat().value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
VariablePtr PyFloat::floor_div(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return std::make_shared<PyFloat>(std::floor(value / rhs.toFloat().value));
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
VariablePtr PyFloat::mod(const VariableBase &rhs) const {
  return sub(*(floor_div(rhs)->mul(rhs)));
}
bool PyFloat::lessThan(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return value < rhs.toFloat().value;
  } else {
    raiseTypeError(rhs);
    return false;
  }
}
bool PyFloat::equal(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return value == rhs.toFloat().value;
  } else {
    raiseTypeError(rhs);
    return false;
  }
}
std::string PyFloat::typeName() const {
  return "'float'";
}
VariablePtr PyString::add(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_string = dynamic_cast<const PyString *>(rhs_ptr)) {
    return std::make_shared<PyString>(value + rhs_string->value);
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
PyString PyString::toString() const {
  return *this;
}
PyInt PyString::toInt() const {
  return PyInt(value);
}
PyFloat PyString::toFloat() const {
  return PyFloat(std::stod(value));
}
PyBool PyString::toBool() const {
  return PyBool(!value.empty());
}
VariablePtr PyString::mul(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    std::string result;
    long long times = rhs_int->value.toLongLong();
    for (int i = 0; i < times; ++i) {
      result += value;
    }
    return std::make_shared<PyString>(result);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    if (rhs_bool->value) {
      return std::make_shared<PyString>(value);
    } else {
      return std::make_shared<PyString>("");
    }
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
bool PyString::lessThan(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_string = dynamic_cast<const PyString *>(rhs_ptr)) {
    return value < rhs_string->value;
  } else {
    raiseTypeError(rhs);
    return false;
  }
}
bool PyString::equal(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_string = dynamic_cast<const PyString *>(rhs_ptr)) {
    return value == rhs_string->value;
  } else {
    raiseTypeError(rhs);
    return false;
  }
}
std::string PyString::typeName() const {
  return "'str'";
}
VariablePtr PyBool::add(const VariableBase &rhs) const {
  return toInt().add(rhs);
}
PyInt PyBool::toInt() const {
  return PyInt(value);
}
PyString PyBool::toString() const {
  return PyString(value ? "True" : "False");
}
VariablePtr PyBool::sub(const VariableBase &rhs) const {
  return toInt().sub(rhs);
}
PyFloat PyBool::toFloat() const {
  return PyFloat(value);
}
PyBool PyBool::toBool() const {
  return *this;
}
bool PyBool::isNumeric() const {
  return true;
}
VariablePtr PyBool::mul(const VariableBase &rhs) const {
  return toInt().mul(rhs);
}
VariablePtr PyBool::div(const VariableBase &rhs) const {
  return toInt().div(rhs);
}
VariablePtr PyBool::floor_div(const VariableBase &rhs) const {
  return toInt().floor_div(rhs);
}
VariablePtr PyBool::mod(const VariableBase &rhs) const {
  return toInt().mod(rhs);
}
bool PyBool::lessThan(const VariableBase &rhs) const {
  return toInt().lessThan(rhs);
}
bool PyBool::equal(const VariableBase &rhs) const {
  return toInt().equal(rhs);
}
std::string PyBool::typeName() const {
  return "'bool'";
}

PyString PyNone::toString() const {
  return PyString("None");
}
PyBool PyNone::toBool() const {
  return PyBool(false);
}
bool PyNone::equal(const VariableBase &rhs) const {
  return dynamic_cast<const PyNone *>(&rhs) != nullptr;
}
std::string PyNone::typeName() const {
  return "'NoneType'";
}
std::string PyTuple::typeName() const {
  return "'tuple'";
}
PyString PyTuple::toString() const {
  std::string result = "(";
  for (auto &item : value) {
    result += item->toString().value + ", ";
  }
  if (!value.empty()) {
    result.pop_back();
    if (value.size() > 1) {
      result.pop_back();
    }
  }
  result += ")";
  return PyString(result);
}
PyBool PyTuple::toBool() const {
  return PyBool(!value.empty());
}
VariablePtr PyTuple::add(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_tuple = dynamic_cast<const PyTuple *>(rhs_ptr)) {
    auto result = std::make_shared<PyTuple>(*this);
    result->value.insert(result->value.end(), rhs_tuple->value.begin(), rhs_tuple->value.end());
    return result;
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
VariablePtr PyTuple::mul(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    auto result = std::make_shared<PyTuple>();
    long long times = rhs_int->value.toLongLong();
    for (int i = 0; i < times; ++i) {
      result->value.insert(result->value.end(), value.begin(), value.end());
    }
    return result;
  } else {
    raiseTypeError(rhs);
    return nullptr;
  }
}
bool PyTuple::lessThan(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_tuple = dynamic_cast<const PyTuple *>(rhs_ptr)) {
    if (value.size() != rhs_tuple->value.size()) {
      return value.size() < rhs_tuple->value.size();
    }
    for (int i = 0; i < value.size(); ++i) {
      if (!value[i]->equal(*rhs_tuple->value[i])) {
        return value[i]->lessThan(*rhs_tuple->value[i]);
      }
    }
    return false;
  } else {
    raiseTypeError(rhs);
    return false;
  }
}
bool PyTuple::equal(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_tuple = dynamic_cast<const PyTuple *>(rhs_ptr)) {
    if (value.size() != rhs_tuple->value.size()) {
      return false;
    }
    for (int i = 0; i < value.size(); ++i) {
      if (!value[i]->equal(*rhs_tuple->value[i])) {
        return false;
      }
    }
    return true;
  } else {
    raiseTypeError(rhs);
    return false;
  }
}
std::string PyFunc::typeName() const {
  return "'function'";
}
PyString PyFunc::toString() const {
  return PyString("<function " + name + ">");
}
PyBool PyFunc::toBool() const {
  return PyBool(true);
}
std::vector<VariablePtr> PyFunc::matchParams(FunctionCallArgs call_args) const {
  if (!(args.min_args <= call_args.args.size() && call_args.args.size() <= args.names.size())) {
    throw std::runtime_error("TypeError: " + name + "() takes from " + std::to_string(args.min_args)
                                 + " to " + std::to_string(args.names.size())
                                 + " positional arguments but "
                                 + std::to_string(call_args.args.size()) + " were given");
  }
  std::vector<VariablePtr> param_values(args.names.size());
  for (size_t i = 0; i < call_args.args.size(); ++i) {
    param_values[i] = call_args.args[i];
    if (call_args.kwargs.find(args.names[i]) != call_args.kwargs.end()) {
      throw std::runtime_error("TypeError: " + name + "() got multiple values for argument '"
                                   + args.names[i] + "'");
    }
  }
  for (size_t i = call_args.args.size(); i < args.names.size(); ++i) {
    auto it = call_args.kwargs.find(args.names[i]);
    if (it != call_args.kwargs.end()) {
      param_values[i] = it->second;
      call_args.kwargs.erase(it);
    } else {
      param_values[i] = args.default_value[i];
    }
  }
  if (!call_args.kwargs.empty()) {
    throw std::runtime_error("TypeError: " + name + "() got an unexpected keyword argument '"
                                 + call_args.kwargs.begin()->first + "'");
  }
  return param_values;
}
