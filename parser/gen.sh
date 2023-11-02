#!/bin/bash

cd $(dirname $0)

rm -rf ../generated

antlr4 -no-listener -visitor -Dlanguage=Cpp Python3Lexer.g4 Python3Parser.g4 -o ../generated

cp ./CMakeLists-for-generated.txt ../generated/CMakeLists.txt

###
#
# If you do no want to do the bonus of
# "Supporting More Grammar of Python",
# You do no need to understand this file currently.
#
###
