//
// Created by zj on 11/10/2023.
//

#ifndef PYTHON_INTERPRETER_SRC_ERROR_DETECT_H_
#define PYTHON_INTERPRETER_SRC_ERROR_DETECT_H_

#include <unistd.h>
#include <iostream>

class ErrorDetector {
 public:
  static void makeTimeLimitExceeded();
  static void makeMemoryLimitExceeded();
  static void makeRuntimeError();
  static void makeSystemError();
  static void sleep(int miliseconds);
};

#endif //PYTHON_INTERPRETER_SRC_ERROR_DETECT_H_
