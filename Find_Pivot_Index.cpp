/*
Given an array of integers nums, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.
If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.
Return the leftmost pivot index. If no such index exists, return -1.

Example 1:
Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
The pivot index is 3.
Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
Right sum = nums[4] + nums[5] = 5 + 6 = 11

LEETCODE PROBLEM NUMBER: 724
*/

#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>nums={1,7,3,6,5,6};
    int n=nums.size();
    int left_sum=0;
    int right_sum;
    int sum=0;

    for(int i=0; i<n ;i++){
        sum+=nums[i];
    }

    for(int i=0; i<n; i++){
        right_sum=sum-left_sum-nums[i];

        if(left_sum==right_sum){
            cout<<"Pivot Index is : "<<i<<endl;
            cout<<"Here Left Sum = Right Sum which is "<<left_sum<<endl;
            break;
        }
        left_sum+=nums[i];
    }
    return 0;
}