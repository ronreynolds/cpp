cmake_minimum_required(VERSION 4.0)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/main/include)

add_executable(cpp
        src/main/cpp/Main.cpp
        src/main/cpp/HelloWorld.cpp
        src/main/include/HelloWorld.h)

add_executable(HelloWorldTest
        src/test/cpp/HelloWorldTest.cpp
        src/main/cpp/HelloWorld.cpp
        src/main/include/HelloWorld.h)
