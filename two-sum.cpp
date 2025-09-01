/*
Assignment: Two Sum Problem in C++
Author: Irfan Ali Shaik
Date: 08-31-2025

This program finds two indices in an array of integers such that 
the numbers at those indices add up to a given target.
This version uses only arrays and loops (no hash maps).
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Check all pairs of numbers in the array
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j}; // Return indices if pair adds up to target
            }
        }
    }
    return {}; // Should never happen because one solution is guaranteed
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << "Indices: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}
