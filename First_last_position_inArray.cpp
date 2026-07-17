/*
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
Using binary search

Two times binary earch for first and last occurance and return indices

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

LEETCODE Problem Number---34
*/

#include<iostream>
using namespace std;
#include<vector>

void search_indices(vector<int>& arr,int target){

    int n=arr.size();
    vector<int>ans={-1,-1};
    // First Occurance

    int start=0,last=n-1;
    while(start<=last){

        int mid=start+(last-start)/2;
        if(arr[mid]==target){
            ans[0]=mid;
            last=mid-1;// search weather occured previously or not
        }

        else if(arr[mid]<target) start=mid+1;
        else last=mid-1;
    }

    // Last Occurance
    
    start=0,
    last=n-1;
    while(start<=last){

        int mid=start+(last-start)/2;
        if(arr[mid]==target){
            ans[1]=mid;
            start=mid+1;// search weather occured again or not
        }

        else if(arr[mid]<target) start=mid+1;
        else last=mid-1;
    }

    cout<<"Starting and Ending occurance of "<<target<<" is"<<endl;
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;

}

int main(){

    vector<int>arr={5,7,7,8,8,10};
    int target=8;

    search_indices(arr,target);
    return 0;
}

