/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 
Example 1:
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

Time Complexity : O(m+n)

LEETCODE Problem Number---240
*/

#include<iostream>
using namespace std;
#include<vector>

bool isSearch(vector<vector<int>> &arr, int row, int col, int target){

    int r=0;
    int c=col-1;

    while( c>=0 && r< row){

        if(target== arr[r][c]){
            return true;
        }
        else if(target< arr[r][c]) // left search
        {
            c--;
        }
        else r++;
    }
    return false;
}

int main(){
    vector<vector<int>>arr={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    int m=arr.size();
    int n=arr[0].size();

    int target=5;
    bool store=isSearch(arr,m,n,target);

    if(store){
        cout<<"Element exists in the given array"<<endl;
    }
    else{
        cout<<"Element not found !"<<endl;

    }
        return 0;
}