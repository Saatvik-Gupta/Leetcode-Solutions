/*
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

Example 2:
Input: nums = [0]
Output: [[],[0]]

LEETCODE Problem Number---90
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void Subsets(vector<int>& nums,vector<int>& ans,int idx){

    sort(nums.begin(),nums.end()); // sorted for comparing duplicated placed together

    // Base condition
    if(idx==nums.size()){

    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return;

    }

    // inclusion
    ans.push_back(nums[idx]);
    Subsets(nums,ans,idx+1);

    ans.pop_back(); // backtracking

    // Now by observing pattern duplicacy allowed when excluded and then tries to include
    int i=idx+1;
    while(i<nums.size() && nums[i]==nums[i-1]) i++;
    Subsets(nums,ans,i);
}

int main(){
    vector<int>nums={1,2,2};

    vector<int>ans;

    cout<<"All Posiible subsets are:"<<endl;

    Subsets(nums,ans,0);
    return 0;

}