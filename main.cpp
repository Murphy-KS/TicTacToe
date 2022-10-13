//
// Created by Benjamin Murphy on 10.10.22.
//
#include <vector>
#include <iostream>



#include "TicTacToeGame.h"



int main() {
    using std::string;
    using std::cout;
    using std::endl;

    TicTacToeGame g("Hans", "Peter");

    cout << g.calculateWinner() << endl;
    string output = g.getFieldStr();
    cout << output << endl;


    return 0;
}
