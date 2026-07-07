// To find unique element in sorted array
/*
ex: nums=[1,1,2,2,5,6,6,9,9]
single element is 4 at index 4
*/

#include<iostream>
using namespace std;
#include<vector>

int single_element_M2(vector<int>arr)
{
    int n= arr.size();
    // Method-2 Linear Search, Complexity: O(n)

    if(n==1){ // array is of single size 
        return arr[0];
    }

    if(arr[0]!= arr[1]){
        return arr[0]; 
    }

    if(arr[n-1]!= arr[n-2]){
        return arr[n-1];
    }

    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
            return arr[i];
            
        }
    }
}

int single_element_M3(vector<int>arr){

// Method-3 As array sorted Binary Search, Time Complexity: O(log n)


}

int main()
{
    vector<int>nums={1,1,2,2,5,6,6,9,9};

    // Method-1 Bitwise XOR Approach, Complexity: O(n)
    // int ans=0;
    // for( int value: nums){
    //     ans= ans^value;
    // }

    // cout<<"Single element in given array is: "<<ans<<endl;

    // Method-2 Linear Search, Complexity: O(n)
    // int store=single_element_M2(nums);
    // cout<<"Single Element in array is: "<<store<<endl;

    // Method-3 As array sorted Binary Search, Time Complexity: O(log n)
    int st=single_element_M3(nums);
    cout<<"Single Element in array is: "<<st<<endl;

    return 0;
}
