#!/bin/bash

cd $(dirname $0) || exit

rm -rf ../generated

antlr4 -no-listener -visitor -Dlanguage=Cpp Python3Lexer.g4 Python3Parser.g4 -o ../generated

cp ./CMakeLists-for-generated.txt ../generated/CMakeLists.txt