cmake_minimum_required(VERSION 3.23)
project(tictactoe)

set(CMAKE_CXX_STANDARD 20)

add_executable(tictactoe main.cpp TicTacToeField.cpp TicTacToeField.h TicTacToeGame.cpp TicTacToeGame.h)
