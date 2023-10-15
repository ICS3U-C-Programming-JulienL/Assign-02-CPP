// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: September 26, 2023
// Calculating the surface area and volume of trapezoidal prism

#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    // declare variables
    float sideA, sideB, sideC, sideD, length, height,
        surfaceArea, volume, roundedSurfaceArea;
    std::string units;

    // get the length and width
    std ::cout << "Area and Perimeter of a Rectangle" << std::endl;
    std::cout << "How long is side a (the left diagonal)?";
    std::cin >> sideA;
    std::cout << "How long is side b (the long base)?";
    std::cin >> sideB;
    std::cout << "How long is side c (the right diagonal)?";
    std::cin >> sideC;
    std::cout << "How long is side d (the short base)";
    std::cin >> sideD;
    std::cout << "What is the length of the prism?";
    std::cin >> length;
    std::cout << "What is the length of the prism?";
    std::cin >> height;
    std::cout << "What units would you like to be used (ex. cm)?";
    std::cin >> units;

    // if any of the sides <= 0, then tell the user to enter a positive number.
    if (sideA <= 0) {
            std ::cout << "Enter a positive number for side a." << std::endl;
    } else if (sideB <= 0) {
        std ::cout << "Enter a positive number for side b." << std::endl;
    } else if (sideC <= 0) {
        std ::cout << "Enter a positive number for side c." << std::endl;
    } else if (sideD <= 0) {
        std ::cout << "Enter a positive number for side d." << std::endl;
    } else if (length <= 0) {
        std ::cout << "Enter a positive number for the length." << std::endl;
    } else if (height <= 0) {
        std ::cout << "Enter a positive number for the width." << std::endl;
    } else {
        // otherwise, calculate the surface area and volume
        surfaceArea = height * (sideB + sideD) + length
            * (sideA + sideB + sideC + sideD);
        volume = ((sideD + sideB) / 2) * height * length;

        // display the surface area
        std ::cout << "The surface area is "
            << std::fixed << std::setprecision(2) << std::setfill('0')
            << surfaceArea << " " << units << "^2" << std::endl;

        // display the volume
        std ::cout << "The volume is "
            << std::fixed << std::setprecision(2) << std::setfill('0')
            << volume << " " << units << "^3" << std::endl;
    }
}
