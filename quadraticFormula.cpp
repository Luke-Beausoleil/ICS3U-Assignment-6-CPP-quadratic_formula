// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program does the quadratic formula

#include <iostream>
#include <string>
#include <cmath>

float Discriminant(float a, float b, float c) {
    // this function calculates the discriminant
    float discriminantValue;
    discriminantValue = (pow(b, 2) - (4 * a * c));

    return discriminantValue;
}

float ValueOne(float a, float b, float c) {
    // this function calculates the first root
    float firstRoot;
    firstRoot = ((-1 * b) + sqrt(Discriminant(a, b, c))) / (2 * a);

    return firstRoot;
}

float ValueTwo(float a, float b, float c) {
    // this function calculates the first root
    float secondRoot;
    secondRoot = ((-1 * b) - sqrt(Discriminant(a, b, c))) / (2 * a);

    return secondRoot;
}

main() {
    // this function receives input and calls functions

    // variables
    std::string aString;
    std::string bString;
    std::string cString;
    float a;
    float b;
    float c;
    float x1;
    float x2;

    // input
    std::cout << "Given  the standard formula: 0 = ax² + bx + c" << std::endl;
    std::cout << "Enter the value for 'a': ";
    std::cin >> aString;
    std::cout << "Enter the value for 'b': ";
    std::cin >> bString;
    std::cout << "Enter the value for 'c': ";
    std::cin >> cString;
    try {
        a = std::stof(aString);
        b = std::stof(bString);
        c = std::stof(cString);
        // output and function call
        if (Discriminant(a, b, c) < 0) {
            std::cout << "No roots\nDone." << std::endl;
        } else if (Discriminant(a, b, c) == 0) {
            x1 = ValueOne(a, b, c);
            std::cout << "x = " << x1 << "\nDone" << std::endl;
        } else {
            x1 = ValueOne(a, b, c);
            x2 = ValueTwo(a, b, c);
            std::cout << "x = " << x1 << "\nx = " << x2 << "\nDone."
                  << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input\nDone." << std::endl;
    }
}
