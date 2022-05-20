// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates the cost of pizza using constants

#include <random>
#include <array>
#include <iostream>


template<size_t N>
int findLargest(std::array<int, N> array) {
    // this functions is to get largest number in an array

    int highestNumber = 0;

    for (int counter = 0; counter < array.size(); counter++) {
        if (highestNumber < array[counter]) {
            highestNumber = array[counter];
        }
    }

    return highestNumber;
}

main() {
    // this function uses an array

    std::array<int, 10> randomNumbers;
    int randNum = 0;
    int biggestNumber = 0;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 100);

    // input
        for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        randNum = idist(rgen);
        randomNumbers[loopCounter] = randNum;
        std::cout << "The random number is " << randNum << std::endl;
    }

    biggestNumber = findLargest(randomNumbers);

    std::cout << "\nThe largest number is: "
    << biggestNumber << std::endl;
    std::cout << std::endl;
    std::cout << "Done.";
}
