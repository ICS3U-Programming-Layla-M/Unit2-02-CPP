// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: May 3, 2021
// This program calculates the area and perimeter of a rectangle
// using values the user inputed.

#include <iostream>

int main() {
    // declare variables
    float length, width, area, perimeter;

    // get the user input
    std::cout << "Enter the length (mm): ";
    std::cin >> length;
    std::cout << "Enter the width (mm): ";
    std::cin >> width;

    // calculate the area and perimeter
    area = length*width;
    perimeter = 2*(length+width);

    // display the area and perimeter
    std::cout << "The area is: " << area << " mm^2\n";
    std::cout << "The perimeter is: " << perimeter << " mm\n";
}
