/*
 * File: TwoSum.cpp
 * Link: https://leetcode.com/problems/two-sum/
 *
 * Problem Details:
 * - Difficulty: Easy
 * - Description: Given an array of integers nums and an integer target, return
 *   indices of the two numbers such that they add up to target. You may assume
 *   that each input would have exactly one solution, and you may not use the
 *   same element twice. You can return the answer in any order.
 *
 * - Solution Time Complexity: O(n^2)
 *
 * Author: Calixt Charlebois
 * Date: July 26, 2023
 */

#include <vector>
#include <stdio.h>
#include <stdlib.h>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};