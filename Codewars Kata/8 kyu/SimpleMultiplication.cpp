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

int SimpleMultiplication(int number)
{
    return (number % 2 == 0) ? number * 8 : number * 9;
}
