//
// Created by zj on 11/4/2023.
//

#include "utils.h"

std::string expandControlCharacters(const std::string &str) {
  auto res = std::string();
  for (auto i = 0; i < str.size(); ++i) {
    if (str[i] == '\\') {
      switch (str[++i]) {
        case 'n':
          res += '\n';
          break;
        case 't':
          res += '\t';
          break;
        case 'r':
          res += '\r';
          break;
        case '\\':
          res += '\\';
          break;
        case '\'':
          res += '\'';
          break;
        case '\"':
          res += '\"';
          break;
        default:
          throw std::runtime_error("SyntaxError: (unicode error) "
                                   "unicodeescape codec can't decode bytes in position " +
              std::to_string(i - 1) + "-" + std::to_string(i) +
              ": unknown Unicode character");
      }
    } else {
      res += str[i];
    }
  }
  return res;
}