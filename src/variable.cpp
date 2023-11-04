//
// Created by zj on 11/4/2023.
//

#include "variable.h"
void VariableBase::raiseTypeError() {
  throw std::runtime_error("TypeError");
}
VariablePtr VariableBase::add(const VariableBase &rhs) const {
  raiseTypeError();
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
  raiseTypeError();
  return nullptr;
}
VariablePtr VariableBase::mul(const VariableBase &rhs) const {
  raiseTypeError();
  return nullptr;
}
VariablePtr VariableBase::div(const VariableBase &rhs) const {
  raiseTypeError();
  return nullptr;
}
VariablePtr VariableBase::floor_div(const VariableBase &rhs) const {
  raiseTypeError();
  return nullptr;
}
VariablePtr VariableBase::mod(const VariableBase &rhs) const {
  raiseTypeError();
  return nullptr;
}
VariablePtr VariableBase::lessThan(const VariableBase &rhs) const {
  raiseTypeError();
  return nullptr;
}
VariablePtr VariableBase::equal(const VariableBase &rhs) const {
  raiseTypeError();
  return nullptr;
}
bool VariableBase::isNumeric() const {
  return false;
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
    raiseTypeError();
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
    raiseTypeError();
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
  } else {
    raiseTypeError();
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
    raiseTypeError();
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
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyInt::mod(const VariableBase &rhs) const {
  return sub(*(floor_div(rhs)->mul(rhs)));
}
VariablePtr PyInt::lessThan(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return std::make_shared<PyBool>(value < rhs_int->value);
  } else if (dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return toFloat().lessThan(rhs);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return std::make_shared<PyBool>(value < rhs_bool->toInt().value);
  } else {
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyInt::equal(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_int = dynamic_cast<const PyInt *>(rhs_ptr)) {
    return std::make_shared<PyBool>(value == rhs_int->value);
  } else if (dynamic_cast<const PyFloat *>(rhs_ptr)) {
    return toFloat().equal(rhs);
  } else if (auto rhs_bool = dynamic_cast<const PyBool *>(rhs_ptr)) {
    return std::make_shared<PyBool>(value == rhs_bool->toInt().value);
  } else {
    raiseTypeError();
    return nullptr;
  }
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
    raiseTypeError();
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
    raiseTypeError();
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
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyFloat::div(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return std::make_shared<PyFloat>(value / rhs.toFloat().value);
  } else {
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyFloat::floor_div(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return std::make_shared<PyFloat>(std::floor(value / rhs.toFloat().value));
  } else {
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyFloat::mod(const VariableBase &rhs) const {
  return sub(*(floor_div(rhs)->mul(rhs)));
}
VariablePtr PyFloat::lessThan(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return std::make_shared<PyBool>(value < rhs.toFloat().value);
  } else {
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyFloat::equal(const VariableBase &rhs) const {
  if (rhs.isNumeric()) {
    return std::make_shared<PyBool>(value == rhs.toFloat().value);
  } else {
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyString::add(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_string = dynamic_cast<const PyString *>(rhs_ptr)) {
    return std::make_shared<PyString>(value + rhs_string->value);
  } else {
    raiseTypeError();
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
  } else {
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyString::lessThan(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_string = dynamic_cast<const PyString *>(rhs_ptr)) {
    return std::make_shared<PyBool>(value < rhs_string->value);
  } else {
    raiseTypeError();
    return nullptr;
  }
}
VariablePtr PyString::equal(const VariableBase &rhs) const {
  auto rhs_ptr = &rhs;
  if (auto rhs_string = dynamic_cast<const PyString *>(rhs_ptr)) {
    return std::make_shared<PyBool>(value == rhs_string->value);
  } else {
    raiseTypeError();
    return nullptr;
  }
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
VariablePtr PyBool::lessThan(const VariableBase &rhs) const {
  return toInt().lessThan(rhs);
}
VariablePtr PyBool::equal(const VariableBase &rhs) const {
  return toInt().equal(rhs);
}

PyString PyNone::toString() const {
  return PyString("None");
}
PyBool PyNone::toBool() const {
  return PyBool(false);
}
VariablePtr PyNone::equal(const VariableBase &rhs) const {
  return std::make_shared<PyBool>(dynamic_cast<const PyNone *>(&rhs) != nullptr);
}
