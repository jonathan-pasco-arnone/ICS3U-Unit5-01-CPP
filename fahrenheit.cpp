// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program converts fahrenheit to celsius

#include <iostream>

int temperature() {
    // This function converts fahrenheit to celsius

    std::string celsiusStr;
    int celsius;
    double fahrenheit;

    std::cout << "" << std::endl;
    std::cout << "This program calculates the fahrenheit"
          " from celsius" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Please input the celsius: ";
    std::cin >> celsiusStr;
    std::cout << "" << std::endl;

    try {
        celsius = std::stoi(celsiusStr);
        fahrenheit = 1.0 * 9/5 * celsius + 32;
        // The "1.0" is so that the program knows to keep decimals in the total
        // Without it then it would make 9/5(aka 1.8) into 1
        std::cout << "the fahrenheit is " << fahrenheit << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Please input a number, and have"
              " it be positive" << std::endl;
    }
}


int main() {
    // This function calls specified function

    temperature();
}
