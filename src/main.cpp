#include "Evalvisitor.h"
#include "Python3Lexer.h"
#include "Python3Parser.h"
#include "antlr4-runtime.h"
#include <iostream>
#include <unistd.h>
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
      usleep(100 * 1000);
    }
  }
  return 0;
}
