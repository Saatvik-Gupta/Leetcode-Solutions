// To find unique element in sorted array
/*
ex: nums=[1,1,2,2,5,6,6,9,9]
single element is 4 at index 4

LEETCODE Problem Number---540
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
    int n= arr.size();

// Method-3 As array sorted Binary Search, Time Complexity: O(log n)

    int start=0;
    int end=n-1;

    if(n==1){ // array is of single size 
        return arr[0];
    }

    if(arr[0]!= arr[1]){
        return arr[0]; 
    }

    if(arr[n-1]!= arr[n-2]){
        return arr[n-1];
    }

    while(start<=end){
        int mid= start+ (end-start)/2;
        if( arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if(mid%2==0){
            if(arr[mid]==arr[mid-1]){ // left side search as even array to the left of mid
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }

        else{ // (mid%2!=0)

            if(arr[mid]==arr[mid-1]){ //right side search as odd array to the left of mid
                start=mid+1;
            }
            else{
                end=mid-1;
            }

        }
    }
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
