/*
283. Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
https://leetcode.com/problems/move-zeroes/

Note that you must do this in-place without making a copy of the array.

 Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Example 2:
Input: nums = [0]
Output: [0]
 */

#include<iostream>
#include<vector>
using namespace std;

void MoveZeroes(vector<int>& arr){
    int index = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            arr[index] = arr[i];
            index++;
        }
    }

    for(int i = index; i < arr.size(); i++){
        arr[index] = 0;
        index++;
    }
}   

int main(){
    vector<int> nums = {0, 1, 0, 3, 12};
    MoveZeroes(nums);
    for(auto& elem : nums){
        cout<<elem<<endl;
    }
}