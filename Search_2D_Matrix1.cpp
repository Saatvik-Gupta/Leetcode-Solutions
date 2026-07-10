/*
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Time Complexity : O(logm+logn)==> O(log(m * n))

LEETCODE Problem Number---74
*/

#include<iostream>
using namespace std;
#include<vector>

bool isSearch(vector<vector<int>> &arr, int row, int col, int target){ // O(log(m*n))

    int low=0;
    int high=row-1;

    while(low<=high){ // O(log m)
        int midrow= low + (high-low)/2;

        if(target>= arr[midrow][0] && target<= arr[midrow][col-1]){ // row found where element exists

            // Binary search again to find target at that particular row-->midrow

            int start=0;
            int end=col-1;

            while(start<=end){ // O(log n)
                int midele= start + (end-start)/2;

                if(target== arr[midrow][midele]){
                    return true;
                }
                else if (target> arr[midrow][midele]){
                    start=midele+1;
                }
                else end=midele-1;
            }
            return false;
        }

        else if(target>arr[midrow][col-1]){
            low=midrow+1;
        }
        else high=midrow-1;
    }
        return false;
}

int main(){

    vector<vector<int>> arr={
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };

    int m= arr.size();
    int n=arr[0].size();
    int target=3;
    bool store=isSearch(arr,m,n,target);

    if(store){
        cout<<"Element found in the given array"<<endl;
    }
    else{
        cout<<"Element not found !"<<endl;

    }

        return 0;
    }