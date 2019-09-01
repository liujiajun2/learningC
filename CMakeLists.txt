cmake_minimum_required(VERSION 3.12)
project(learning C)

set(CMAKE_C_STANDARD 99)

add_executable(learning src/main.c src/MStruct.c src/MStruct.h src/MString.c src/MString.h src/MUnion.h src/MUnion.c src/MEnum.c src/MEnum.h src/MArray.c src/MArray.h src/MConst.c src/MConst.h src/MFile.c src/MFile.h)