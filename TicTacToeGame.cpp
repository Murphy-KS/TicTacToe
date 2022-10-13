//
// Created by Benjamin Murphy on 11.10.22.
//
#include <iostream>
#include <string>

#include "TicTacToeGame.h"

TicTacToeGame::TicTacToeGame(std::string player1, std::string player2) {
    using std::cout;
    using std::endl;

    this->player1 = player1;
    this->player2 = player2;

    std::cout << "Ein neues TicTacToeGame wurde erstellt" << std::endl;
}

std::string TicTacToeGame::getFieldStr() {
    std::stringstream result;

    result << "Player1: " << player1 << std::endl;
    result << "Player2: " << player2 << std::endl;
    result << TicTacToeField::getFieldStr();

    return result.str();
}