// Copyright (c) 2021 Titwech wal All rights reserved.
// Created By: Titwech Wal
// Date: April.1. 2022

// program that asks the user to enter an
// integer. then says what integer it is

#include <iostream>

int main() {
    // local variable
    float userInput;

    // Get the integer from user
    std::cout << "Enter an integer: ";
    std::cin >> userInput;

    // check if number is negative, positive or zero
    if (userInput < 0) {
        // output
        std::cout << userInput << " is a negitive number";
    } else if (userInput > 0) {
        std::cout << userInput << " is a positive number";
    } else if (userInput == 0) {
        std::cout << userInput << " is just zero!";
    }
}
