// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: May 16, 2025
// Program that generates a random list of random numbers.
// It then displays the average of all the random numbers in the list.

#include <iostream>
#include <cstdio>
#include <random>

int main() {
    // DECLARE CONSTANTS
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;
    // Initialize an empty array
    int listOfInt[MAX_ARRAY_SIZE];
    // RANDOM SEED
    std::random_device seed;
    // MERSENNE TWISTER
    std::mt19937 mt(seed());
    // Distribution that will return a random number between
    // MIN_NUM AND MAX_NUM [INCLUSIVE] when called with the mersenne twister.
    std::uniform_int_distribution<int> GenerateRandNum(MIN_NUM, MAX_NUM);
    // Fill the list up with random numbers
    for (int index = 0; index < MAX_ARRAY_SIZE; index++) {
        // Generate a random integer between MIN_NUM AND MAX_NUM
        int randomNumber = GenerateRandNum(mt);
        // Place the random number inside the array
        listOfInt[index] = randomNumber;
        // Display the list operation
        printf("%i added to the list at position %i.\n", randomNumber, index);
    }

    // Initialize variable to hold the sum
    float sum = 0;
    // Loop through all index positions
    for (int index = 0; index < MAX_ARRAY_SIZE; index++) {
        // Increase sum by the value found at the index
        sum += listOfInt[index];
    }
    // Calculate the average
    float average = sum / MAX_ARRAY_SIZE;
    // Display the average
    printf("The average is %g\n", average);
}
