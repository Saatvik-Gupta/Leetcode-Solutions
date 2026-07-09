// To sort an array in such a way that all 0s 1s and 2s occurs in a manner
/*
Example:
arr=[2,1,0,2,0,1,2,0,1,0]
Output: [0,0,0,0,1,1,1,2,2,2]

LEETCODE Problem Number---75
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Dutch_Algorithm(vector<int>nums){ //[2,1,0,2,0,1,2,0,1,0]

    int n=nums.size();
    int low=0, mid=0, high=n-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }

        else if(nums[mid]==1){
            mid++;
        }

        else{ // nums[mid]==2
            swap(nums[high],nums[mid]);
            high--;
        }
    }

    cout<<"Sorted Array is: ";
    for(int val: nums){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){

      vector<int>arr={2,1,0,2,0,1,2,0,1,0};

    // Method-1 in built sort function Complexity: O(nlogn)
    // cout<<"Array before sorting:";
    // for(int val: arr){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // sort(arr.begin(),arr.end()); // O(nlogn) #include<algorithm>
    // cout<<"Array after sorting:";

    // for(int val: arr){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // Method-2 Count frequencies and print by overlapping indices Complexity: O(n) but 2 pass sorting

    // int count0=0, count1=0, count2=0;
    // int idx=0;
    // int n=arr.size();

    // for(int i=0; i<n; i++){
    //     if(arr[i]==0) count0++;
    //     else if(arr[i]==1) count1++;
    //     else count2++;
    // }

    // for(int i=0; i<count0; i++){
    //     arr[idx]=0;
    //     idx++;
    // }

    // for(int i=0; i<count1; i++){
    //     arr[idx]=1;
    //     idx++;
    // }

    // for(int i=0; i<count2; i++){
    //     arr[idx]=2;
    //     idx++;
    // }

    // cout<<"Array after Sorting is: ";
    // for(int val: arr){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // Method-3 3 pointers approach Dutch National Flag Algorithm

    Dutch_Algorithm(arr);

    return 0;
}