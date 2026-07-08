// Book Allocation Problem or Painters Partition Problem or Split Array Largest Sum
/*
Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

Return the minimized largest sum of the split.

A subarray is a contiguous part of the array.

Example 1:

Input: nums = [7,2,5,10,8], k = 2
Output: 18
Explanation: There are four ways to split nums into two subarrays.
The best way is to split it into [7,2,5] and [10,8], where the largest sum among the two subarrays is only 18.
*/

    bool isValid(vector<int>arr,int n,int m,int maxallocation){

        int painters=1;
        int time=0;

        for(int i=0; i<n; i++){
            if(arr[i]>maxallocation){
                return false;
            }

            if(arr[i]+time<=maxallocation){
                time+=arr[i];
            }
            else{
                painters++;
                time=arr[i];
            }
        }

        return (painters>m)?false:true;
    }

    int splitArray(vector<int>& nums, int k) {

        int n=nums.size();
        int start=0;
        int sum=0;

        for(int i=0; i<n; i++){

            sum+= nums[i];
        }

        int last=sum;
        int ans=0;

        if(n<k){
            return -1;
        }

        while(start<=last){
            int mid= start + (last-start)/2;

            if(isValid(nums,n,k,mid)){
                ans=mid;
                last=mid-1;
            }

            else{
                start=mid+1;
            }
        }
        
        return ans;
    }
};