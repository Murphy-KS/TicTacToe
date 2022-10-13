//
// Created by Benjamin Murphy on 11.10.22.
//

#include "TicTacToeField.h"
#pragma once

class TicTacToeGame : public TicTacToeField {
private:
    std::string player1;
    std::string player2;
public:
    TicTacToeGame(std::string player1, std::string player2);
    std::string getFieldStr();
};


