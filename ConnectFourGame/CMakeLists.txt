cmake_minimum_required(VERSION 3.7)
project(HW5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Cell.h Cell.cpp ConnectFourAbstract.h ConnectFourAbstract.cpp ConnectFourPlus.h ConnectFourPlus.cpp ConnectFourDiag.h ConnectFourDiag.cpp ConnectFourPlusUndo.cpp ConnectFourPlusUndo.h ConnectFourRegular.h ConnectFourRegular.cpp)
add_executable(HW5 ${SOURCE_FILES})