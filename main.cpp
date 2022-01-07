// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// One to Two Thousand

#include <iostream>

int main() {
    // main function for creating one to two program

    // process
    for (int num = 1000; num < 2000; num+=5) {
        // output
        std::cout << num << " ";
        std::cout << (num+1) << " ";
        std::cout << (num+2) << " ";
        std::cout << (num+3) << " ";
        std::cout << (num+4) << " " << std::endl;
    }
    // output
    std::cout << "2000" << std::endl;

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
