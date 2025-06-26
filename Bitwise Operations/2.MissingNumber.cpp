/*
268. Missing Number
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:
Input: nums = [3,0,1]
Output: 2

Explanation:
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:
Input: nums = [0,1]
Output: 2

Explanation:
n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:
Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8

Explanation:
n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
*/

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& arr){
    int mn = 0;
    for(auto& elem : arr){
        mn ^= elem;
    }

    for(int i =0 ; i < arr.size() + 1; ++i){
        mn ^= i;
    }

    return mn;
}

int main(){
    vector<int> arr = {3, 0, 1};
    auto mn = missingNumber(arr);
    cout<<mn<<endl;
}

/*
    The idea is that we know the range will be 0 to n so when we xor all the value from the array and then with the range we will be able to find the missing element where all other element cancel out.
*/