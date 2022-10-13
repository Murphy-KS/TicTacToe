//
// Created by Benjamin Murphy on 10.10.22.
//
#include <vector>
#include <iostream>

#include "TicTacToeField.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

TicTacToeField::TicTacToeField() {
        field = {{0,2,0},{0,2,0},{0,2,0}};
    }

TicTacToeField::TicTacToeField(std::vector<std::vector<int>> field) {
    this->field = field;
}

int TicTacToeField::calculateWinner() {
    for (int i = 0; i <= 2; i++) {
        if (field.at(i).at(0) != 0 &&
            field.at(i).at(0) == field.at(i).at(1) &&
            field.at(i).at(0) == field.at(i).at(2)) {

            return field.at(i).at(0);
        }
    }
    for (int i = 0; i <= 2; i++) {
        if (field.at(0).at(i) != 0 &&
            field.at(0).at(i) == field.at(2).at(i) &&
            field.at(0).at(i) == field.at(2).at(i)) {

            return field.at(0).at(i);
        }
    }
    if (field.at(0).at(0) != 0 &&
        field.at(0).at(0) == field.at(1).at(1) &&
        field.at(0).at(0) == field.at(2).at(0)) {

        return field.at(0).at(0);
    }
    if (field.at(0).at(2) != 0 &&
        field.at(0).at(2) == field.at(1).at(1) &&
        field.at(0).at(2) == field.at(2).at(0)) {

        return field.at(0).at(2);
    }
    return 0;
}

string TicTacToeField::getFieldStr() {
    std::stringstream result;
    for (const auto &row : field) {
        cout << " | ";
        for (const auto &item : row) {
            cout << item << " | ";
        }
        cout << endl;
    }

    return result.str();

}
