// Searching simplt means to search a particular target element into a given array
/* Two types of Searching are there:
Linear and Binary Search

Linear Search is a Sequential Search with complexity O(N)
Binary Search works on sorted elements with complexity O(log2N)

LEETCODE Problem Number---704 
*/

#include<iostream>
using namespace std;
#include<vector>

int linear_search(vector<int>nums,int target){

    int n=nums.size();
    for(int i=0; i<n; i++){
        if(nums[i]==target){
            return i;
            }
        
        return -1;

    }
}

int binarysearch(vector<int>nums,int target){

    int first=0;
    int last=nums.size()-1;
    int mid= first + (last-first)/2;

    while (first<= last){
        if( nums[mid] == target){
            return  mid;
        }
        else if(target > nums[mid]){
            first=mid+1;
        }
        else{
            last=mid-1;
        }

        mid=first+ (last-first)/2;
    }

        return -1;
    }


int main(){
    int target;
    vector<int>nums={1,5,4,3,9,8,6};
    cout<<"Enter the Target:";
    cin>>target;
    // int index=linear_search(nums,target);
    // cout<<"Element Found at index : "<<index<<endl;

    int index=binarysearch(nums,target);
    cout<<"Element Found at index : "<<index<<endl;
    return 0;
    
}