// To find element from a given rotated sorted array in O(logn) Complexity
/*
remember from mid either left half or right half is always sorted in rotated soretd array
ex. [3,4,5,6,7,0,1,2] target =0
we see that right side is sorted
" Modified Binary Seach "

LEETCODE Problem Number---33
*/

#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int>nums={3,4,5,6,7,0,1,2};
    int n=nums.size();
    int target=0;
    int mid;
    int start=0;
    int last=n-1;
    while(start<=last){
        mid=start+ (last-start)/2;

        if(nums[mid]==target){
            cout<<"Element "<<target<<" Found at Index: "<<mid<<endl;
            return 0;
        }

        if(nums[start]<=nums[mid) // left sorted
        {
            if(target>=nums[start] && target<=nums[mid]){
                last=mid-1;
            }
                else{
                    start=mid+1;
                }
            }
        else{ // right sorted
            if(target>= nums[mid]&& target<=nums[last]){
                start=mid+1;
            }
                else{
                    last=mid-1;
                }
            }

        }

    return 0;
}
