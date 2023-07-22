/*
 * File: SimpleMultiplication.cpp
 * Link: https://www.codewars.com/kata/583710ccaa6717322c000105/train/cpp
 * Kata Description: 
 * 
 * Challenge Details:
 * - Difficulty: 8 kyu
 * - Description: This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.
 * 
 * Author: Calixt Charlebois
 * Date: July 21, 2023
 */

#include <iostream>
#include <array>

int SimpleMultiplication(int number);

int main() {
    std::array<int, 5> input = {2, 1, 8, 4, 5};
    std::array<int, 5> output = {16, 9, 64, 32, 45};

    for (size_t i = 0; i < input.size(); i++) {
        if (SimpleMultiplication(input[i]) == output[i]) {
            std::cout << "TEST PASS" << std::endl;
        } else {
            std::cout << "TEST FAIL" << std::endl;
        }
    }

    return 0;
}

int SimpleMultiplication(int number) {
    return (number % 2 == 0) ? number * 8 : number * 9;
}
