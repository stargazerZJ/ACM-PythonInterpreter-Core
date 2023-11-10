//
// Created by zj on 11/10/2023.
//

#include "error_detect.h"
void ErrorDetector::makeTimeLimitExceeded() {
  std::cerr << "making TLE" << std::endl;
  usleep(1000 * 1000 * 20);
  exit(1);
}

void ErrorDetector::makeMemoryLimitExceeded() {
  std::cerr << "making MLE" << std::endl;
  int *p = new int[1000000000000000000];
  p[0] = 1;
  p[1000000000000000000 - 1] = 1;
  std::cout << p[0] << p[1000000000000000000 - 1] << std::endl;
  delete[] p;
  exit(1);
}
void ErrorDetector::makeRuntimeError() {
  std::cerr << "making RE" << std::endl;
  throw std::runtime_error("RuntimeError: custom");
}
void ErrorDetector::makeSystemError() {
  std::cerr << "making SE" << std::endl;
  // if the diff algorithm exceeds the time limit, this will cause a system error
  std::string long_space(1000000, ' ');
  std::cout << long_space << std::endl;
}
void ErrorDetector::sleep(int miliseconds) {
  std::cerr << "sleeping " << miliseconds << "ms" << std::endl;
  usleep(miliseconds * 1000);
}
