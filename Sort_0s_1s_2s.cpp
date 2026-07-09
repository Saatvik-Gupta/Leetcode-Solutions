// To sort an array in such a way that all 0s 1s and 2s occurs in a manner
/*
Example:
arr=[2,1,0,2,0,1,2,0,1,0]
Output: [0,0,0,0,1,1,1,2,2,2]
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    //Method-1 in built sort function Complexity: O(nlogn)

    vector<int>arr={2,1,0,2,0,1,2,0,1,0};
    cout<<"Array before sorting:";
    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    sort(arr.begin(),arr.end()); // O(nlogn)
    cout<<"Array after sorting:";

    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    // Method-2 Count frequencies and print by overlapping indices
    return 0;
}