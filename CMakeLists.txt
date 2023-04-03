cmake_minimum_required(VERSION 3.24)
project(guessGame)

set(CMAKE_CXX_STANDARD 17)

add_executable(guessGame main.cpp utils/guessutils.cpp utils/guessutils.h)
