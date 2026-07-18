/*
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

Example 2:
Input: nums = [0]
Output: [[],[0]]

LEETCODE Problem Number---78
*/

#include<iostream>
using namespace std;
#include<vector>

void Subsets(vector<int>& nums,vector<int>& ans,int idx){

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

    // exclusion
    Subsets(nums,ans,idx+1);
}

int main(){
    vector<int>nums={1,2,3};

    vector<int>ans;

    cout<<"All Posiible subsets are:"<<endl;

    Subsets(nums,ans,0);
    return 0;

}