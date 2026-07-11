/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space.

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

LEETCODE Problem Number---287
*/

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_set>

int Repeating_num(vector<int> &arr){ // Time Complexity:O(n), Space Complexity: O(n)--set(stl used)
    // Method 1-- set method

    unordered_set<int>s;
    int n=arr.size();

    for(int i=0; i<n; i++){
        if( s.find(arr[i]) != s.end()){ // exists

            return arr[i];
            break;
        }
        s.insert(arr[i]);
    }
return -1;
}

int main(){
    vector<int>arr={1,3,2,4,2,2};

    int store=Repeating_num(arr);
    cout<<"Repeating element in array is :"<<store<<endl;
    return 0;

}