project(sysy2022)

cmake_minimum_required(VERSION 3.16)
file(GLOB_RECURSE DIR_SRC "src/*.cpp")
file(GLOB_RECURSE DIR_LIB_SRC "third_party/*.cpp")
add_compile_options(-g -std=c++17 -O2)
include_directories(src)
include_directories(third_party/antlr4-runtime)
add_executable(compiler ${DIR_SRC} ${DIR_LIB_SRC})