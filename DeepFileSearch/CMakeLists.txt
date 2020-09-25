cmake_minimum_required(VERSION 3.17)
project(DeepFileSearch)

set(CMAKE_CXX_STANDARD 20)

add_executable(DeepFileSearch main.cpp FileDAO.cpp FileDAO.h)