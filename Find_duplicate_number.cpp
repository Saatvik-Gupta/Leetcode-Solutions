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

int Optimal_Repeating_find(vector<int> &arr){ // Time Complexity:O(n), Space Complexity: O(1)

    // slow-fast approach where we assume our array to be a linked list with node as index and next node as element

    int slow=arr[0];
    int fast=arr[0];
    int n=arr.size();

    do{
        slow=arr[slow]; //+1
        fast= arr[arr[fast]]; //+2
    } while( slow!=fast);

    slow=arr[0]; // reset slow

    while(slow!=fast){
        slow=arr[slow]; //+1
        fast=arr[fast]; //+1
    }

    // now slow and fast at same element which is the repeated one slow=fast return any

    return slow;

}

int main(){
    vector<int>arr={1,3,2,4,2,2};

    // int store=Repeating_num(arr); // Space Complexity is O(n) but question demands O(1)
    // cout<<"Repeating element in array is :"<<store<<endl;

    // use this
    int store=Optimal_Repeating_find(arr);
     cout<<"Repeating element in array is :"<<store<<endl;

    return 0;

}