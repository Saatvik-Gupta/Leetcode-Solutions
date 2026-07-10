/*
Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.---Use Quicksort as space complexity(quicksort)<space complexity(mergesort)...
Example:
Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).

Algorithm used: Mergesort

Mergesort: Complexity-O(nlogn), Space Complexity: O(n) due to a temporary array, Out-place sorting, Requires extra temporary space.

LEETCODE Problem Number---912
*/

#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int> &arr,int low,int mid,int high){

    vector<int>temp; // O(n) Space Complexity
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
        temp.push_back(arr[j]);
        j++;
        }
    }

    // Remaining elements
    while(i<=mid){ // left elements
        temp.push_back(arr[i]);
        i++;
    }
   
    while(j<=high){ // right elements
        temp.push_back(arr[j]);
        j++;
    }

    // Now to transfer all elements from temp-->original array
    for(int idx=0; idx<temp.size(); idx++){
        arr[idx + low]= temp[idx];
    }
}

void mergesort(vector<int> &arr,int low,int high){ // pass by reference-changes also reflect in original array
    int mid;
    if(low<high){

        mid= low+ (high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main(){
    vector<int>arr={1,6,7,4,3,9,8,11,10};

    int n=arr.size();
    int low=0;
    int high=n-1;
    cout<<"Array before sorting is: ";
    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    mergesort(arr,low,high);

    cout<<"Array after sorting is: ";
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}



