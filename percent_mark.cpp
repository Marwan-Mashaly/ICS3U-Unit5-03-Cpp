// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program calculates the area of a triangle
#include <iostream>


float mark(std::string markLevel) {
    // This function calculates percentage mark
    float percentage = 0;

    if (markLevel == "4+") {
        percentage = 97;
    } else if (markLevel == "4") {
        percentage = 90;
    } else if (markLevel == "4-") {
        percentage = 85;
    } else if (markLevel == "3+") {
        percentage = 78;
    } else if (markLevel == "3") {
        percentage = 74;
    } else if (markLevel == "3-") {
        percentage = 71;
    } else if (markLevel == "2+") {
        percentage = 68;
    } else if (markLevel == "2") {
        percentage = 64;
    } else if (markLevel == "2-") {
        percentage = 61;
    } else if (markLevel == "1+") {
        percentage = 58;
    } else if (markLevel == "1") {
        percentage = 55;
    } else if (markLevel == "1-") {
        percentage = 51;
    } else if (markLevel == "NE") {
        percentage = 0;
    } else {
        percentage = -1;
    }
    return percentage;
}


main() {
    // This function gets grade level and calls percentage

    std::string level;
    int finalMark;

    // input
    std::cout << "Enter level of grade: ";
    std::cin >> level;
    std::cout << std::endl;

    // call functions
    finalMark = mark(level);

    // output
    if (finalMark == -1) {
        std::cout << "Invalid Input" << std::endl;
    } else {
        std::cout << finalMark << std::endl;
    }
}
