//
// Created by Benjamin Murphy on 10.10.22.
//
#pragma once



#include <vector>
#include <sstream>

class TicTacToeField {
protected:
    std::vector<std::vector<int>> field;

public:
    TicTacToeField();
    TicTacToeField(std::vector<std::vector<int>> field);

    int calculateWinner();
    std::string getFieldStr();
};