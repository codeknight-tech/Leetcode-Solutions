/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Example 3:
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
*/

#include<iostream>
#include<vector>
using namespace std;

void mergeSortedArray(vector<int>& arr1, int m, vector<int>& arr2, int n){
    int p1 = m - 1 ,p2 = n - 1, p = m + n - 1;
    while(p1 >= 0 && p2 >= 0){
        if(arr1[p1] > arr2[p2]){
            arr1[p] = arr1[p1];
            p--;
            p1--;
        }else{
            arr1[p] = arr2[p2];
            p--;
            p2--;
        }
    }

    while(p2 >= 0){
        arr1[p] = arr2[p2];
        p--;
        p2--;
    }
}

int main(){
    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    int m = 3, n = 3;
    mergeSortedArray(arr1, m, arr2, n);
    for(auto& elem : arr1){
        cout<<elem<<endl;
    }
}


/*
    Here The idea is that two pointer in such a way as we are filling from the end meaning in descending order.
*/