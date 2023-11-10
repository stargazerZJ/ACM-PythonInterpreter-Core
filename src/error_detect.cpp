//
// Created by zj on 11/10/2023.
//

#include "error_detect.h"
void ErrorDetector::makeTimeLimitExceeded() {
  usleep(1000 * 1000 * 20);
}

void ErrorDetector::makeMemoryLimitExceeded() {
  int *p = new int[1000000000000000000];
}
void ErrorDetector::makeRuntimeError() {
  throw std::runtime_error("RuntimeError: custom");
}
void ErrorDetector::makeSystemError() {
  // if the diff algorithm exceeds the time limit, this will cause a system error
  std::string long_space(1000000, ' ');
  std::cout << long_space << std::endl;
}
void ErrorDetector::sleep(int miliseconds) {
  usleep(miliseconds * 1000);
}
