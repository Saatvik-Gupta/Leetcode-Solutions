/*
Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.---Use Quicksort as space complexity(quicksort)<space complexity(mergesort)...
Example:
Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).

Algorithm used: Quicksort

Quicksort: Complexity-O(nlogn) or O(n^2) in worst case, Space Complexity: O(logn) due to recurssive call, In-place sorting, No extra temporary space.

LEETCODE Problem Number---912
*/

#include<iostream>
using namespace std;
#include<vector>

int partition(vector<int> &arr,int p,int r){
    int i,j,x;
    i=p-1;
    j=r+1;
    x=arr[p];

    while(1){
        do{
            j--;
        } while(arr[j]>x);

        do{
            i++;
        } while(arr[i]<x);

        if(i<j){
            swap(arr[i],arr[j]);
        }

        else return j;
    }
}

void quicksort(vector<int> &arr,int p,int r){ // pass by reference-changes also reflect in original array
    int q;
    if(p<r){
        q=partition(arr,p,r);
        quicksort(arr,p,q);// left part to the partition
        quicksort(arr,q+1,r);// right part to the partition
    }
}

int main(){
    vector<int>arr={1,6,7,4,3,9,8,11,10};

    int n=arr.size();
    int p=0;
    int r=n-1;
    cout<<"Array before sorting is: ";
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    quicksort(arr,p,r);

    cout<<"Array after sorting is: ";
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}

