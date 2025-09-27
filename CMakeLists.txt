cmake_minimum_required(VERSION 4.0)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

# should make it possible for cpp files to exclude the include/ directory
include_directories(src/main/include)

add_executable(cpp
    src/main/cpp/Main.cpp
    src/main/cpp/HelloWorld.cpp)

add_executable(HelloWorldTest
    src/test/cpp/HelloWorldTest.cpp
    src/main/cpp/HelloWorld.cpp)

# add_library(name sources...) to create a lib (i.e., no main()?)
