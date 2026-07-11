/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

LEETCODE Problem Number---54
*/

#include<iostream>
using namespace std;
#include<vector>

void spiralOrder(vector<vector<int>>& arr) {

    int m=arr.size();
    int n= arr[0].size();
    int srow=0,erow=m-1,scol=0,ecol=n-1;
    vector<int>ans;

    while( (srow<=erow) && (scol<=ecol) ){

        // top-->first row fix-column traverse
        for( int j=scol; j<=ecol; j++){
            ans.push_back(arr[srow][j]);
        }

        // right--> last column fix-row traverse
        for( int i=srow + 1; i<=erow; i++){
            ans.push_back(arr[i][ecol]);
        }

        // bottom--> last row fix-column traverse
        for( int j=ecol-1; j>=scol; j--){

            if(srow==erow){ // avoid duplicacy
                break;
            }
            ans.push_back(arr[erow][j]);
        }

        // left--> first column fix-row traverse
        for( int i=erow-1; i>=srow + 1; i--){

            if(scol==ecol){ // avoid duplicacy
                break;
            }
            ans.push_back(arr[i][scol]);
        }

        srow++;scol++;erow--;ecol--;
    }

    cout<<"Spiral matrix of given array is given as:"<<endl;
    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;

}

int main(){
    vector<vector<int>>arr={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int m=arr.size(); // number of rows
    int n=arr[0].size();// number of columns
    cout<<"Original 2-D Array is given as:"<<endl;

    for(int i=0;i< m; i++){
        for( int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    spiralOrder(arr);
    return 0;
}

