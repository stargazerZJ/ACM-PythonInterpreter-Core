cmake_minimum_required(VERSION 3.15)

if(DEFINED ENV{USE_LOCAL_ANTLR})
    include_directories(../../antlr4-runtime/)
else ()
    include_directories(/usr/include/antlr4-runtime/)
endif ()

file(GLOB PyAntlrSrc *.cpp)

add_library(PyAntlr STATIC ${PyAntlrSrc})
