/*
136. Single Number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,1]
Output: 1

Example 2:
Input: nums = [4,1,2,1,2]
Output: 4

Example 3:
Input: nums = [1]
Output: 1

*/
#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int xor_d = 0;
    for(auto& elem : nums){
        xor_d ^= elem;
    }
    return xor_d;
}

int main(){
    vector<int> nums = {2,2,1};
    auto singleNum = singleNumber(nums);
    cout<<singleNum<<endl;
    return 0;
}

// XOR Operator returns 0, if both operands are the same.