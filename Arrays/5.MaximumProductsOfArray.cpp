/*
1464. Maximum Product of Two Elements in an Array
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
 

Example 1:

Input: nums = [3,4,5,2]
Output: 12 
Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 
Example 2:

Input: nums = [1,5,4,5]
Output: 16
Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.
Example 3:

Input: nums = [3,7]
Output: 12
*/

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxProduct(vector<int>& nums) {
    int l1 = INT_MIN , l2 = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > l1){
            l2 = l1;
            l1 = nums[i];
        } else if(nums[i] > l2){
            l2 = nums[i];
        }
    }
    return (l1 - 1) * (l2 - 1);
}

int main(){
    vector<int> arr = {3,4,5,2};
    auto mp = maxProduct(arr);
    cout<<mp;
}
