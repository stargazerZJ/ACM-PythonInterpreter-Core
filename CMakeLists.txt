cmake_minimum_required(VERSION 3.15.2)
project(python_interpreter)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Ofast")

if (DEFINED ENV{USE_LOCAL_ANTLR})
    find_library(ANTLR4_RUNTIME_LIB NAMES antlr4-runtime PATHS ../antlr4-lib)
else ()
    find_library(ANTLR4_RUNTIME_LIB NAMES antlr4-runtime PATHS /usr/lib)
endif ()

if (DEFINED ENV{USE_LOCAL_ANTLR})
    include_directories(../antlr4-runtime/)
else ()
    include_directories(/usr/include/antlr4-runtime/)
endif ()
include_directories(
        ${PROJECT_SOURCE_DIR}/generated/
        ${PROJECT_SOURCE_DIR}/src/
)

add_subdirectory( ${PROJECT_SOURCE_DIR}/include/int2048 )
add_subdirectory( ${PROJECT_SOURCE_DIR}/generated )

file(GLOB_RECURSE main_src src/*.cpp src/*.h)

add_executable(code ${main_src}) # Add all *.cpp file after src/main.cpp, like src/Evalvisitor.cpp did

target_link_libraries(code PyAntlr)
target_link_libraries(code ${ANTLR4_RUNTIME_LIB})
target_link_libraries(code int2048)
