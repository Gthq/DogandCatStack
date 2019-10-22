cmake_minimum_required(VERSION 3.14)
project(dogcatstk)

set(CMAKE_CXX_STANDARD 11)

add_executable(dogcatstk main.cpp Pet.cpp Pet.h cmake-build-debug/Dog.cpp cmake-build-debug/Dog.h cmake-build-debug/Cat.cpp cmake-build-debug/Cat.h cmake-build-debug/opt.cpp cmake-build-debug/opt.h)