/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input: nums = [1,1,1], k = 2
Output: 2

Example 2:
Input: nums = [1,2,3], k = 3
Output: 2

LEETCODE Problem Number---560
*/


#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>arr={9,4,20,3,10,5};
    int count=0;
    int target_sum=33;

    for(int i=0; i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum==target_sum){
                count++;
            }
        }
    }

    cout<<"Total subarrays having sum= "<<target_sum<<" are: "<<count<<endl;
    return 0;
}
