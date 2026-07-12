/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

LEETCODE Problem Number---15
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>// to use sort()

vector<vector<int>> threeSum(vector<int>& arr) {

    int n=arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());

    for(int i=0; i<n; i++){

        if(i>0 && arr[i]==arr[i-1]) continue;

        int p=i+1;
        int q=n-1;
        while(p<q){
            long long sum=1LL* ( arr[i]+arr[p]+arr[q] );
            if(sum==0){
                ans.push_back({arr[i],arr[p],arr[q]});
                p++;q--;

                while(p<q && arr[p]==arr[p-1]) p++;
                while(p<q && arr[q]==arr[q+1]) q--;
            }

            else if(sum<0) p++;
            else q--;
        }
    }
    return ans;
    
}

int main(){
    vector<int>arr={-1,0,1,2,-1,-4};
    vector<vector<int>>store;

    store=threeSum(arr);

    cout<<"Required pairs whose sum=0 are :"<<endl;
    int r=store.size();
    int col=store[0].size();

    for(int i=0;i<r;i++){
        for(int j=0;j<col;j++){
            cout<<store[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}