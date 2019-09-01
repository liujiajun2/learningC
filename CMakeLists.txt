cmake_minimum_required(VERSION 3.12)
project(learning C)

set(CMAKE_C_STANDARD 99)

add_executable(learning src/main.c src/myStruct.c src/myStruct.h src/myString.c src/myString.h)