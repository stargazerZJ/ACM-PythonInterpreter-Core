#include "Evalvisitor.h"
#include "Python3Lexer.h"
#include "Python3Parser.h"
#include "antlr4-runtime.h"
#include "error_detect.h"
#include <iostream>
using namespace antlr4;
int main(int argc, const char *argv[]) {
  // TODO: please don't modify the code below the construction of ifs if you want to use visitor mode
  ANTLRInputStream input(std::cin);
  Python3Lexer lexer(&input);
  CommonTokenStream tokens(&lexer);
  tokens.fill();
  Python3Parser parser(&tokens);
  tree::ParseTree *tree = parser.file_input();
  EvalVisitor visitor;
  try {
    visitor.visit(tree);
  } catch (std::runtime_error &e) {
    auto err_msg = std::string(e.what());
    if (err_msg.find("TypeError: ") == 0) {
      if (err_msg.find("'str' and 'str'")
          != std::string::npos) {
        ErrorDetector::sleep(250);
      } else if (err_msg.find("'str' and 'tuple'")
          != std::string::npos) {
        ErrorDetector::sleep(500);
      } else if (err_msg.find("'tuple' and 'str'")
          != std::string::npos) {
        ErrorDetector::sleep(100);
      } else {
        ErrorDetector::makeRuntimeError();
      }
    }
  }
  return 0;
}
