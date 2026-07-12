/*Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

LEETCODE Problem Number---18
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

vector<vector<int>> fourSum(vector<int>& arr, int target) {
    

    int n=arr.size();
    sort(arr.begin(), arr.end()); //O(nlogn)
    vector<vector<int>>ans;

    for(int i=0; i<n; i++){

        if(i>0 && arr[i]==arr[i-1]) continue;

        for(int j=i+1; j<n; j++){

            if(j>i+1 && arr[j]==arr[j-1]) continue;
            int p=j+1;
            int q=n-1;

            while(p<q){
                long long sum= (long long)arr[i]+(long long)arr[j]+(long long)arr[p]+(long long)arr[q];

                if(sum==target){
                    ans.push_back( {arr[i],arr[j],arr[p],arr[q]} );
                    p++;
                    q--;

                    while(p<q && arr[p]==arr[p-1]) p++;
                    //while(p<q && arr[q]==arr[q+1]) q--;

                }
                else if( sum<target) p++;
                else q--;
        }
    }
    }

    return ans;
}

int main(){
    vector<int>arr={1,0,-1,0,-2,2};
    vector<vector<int>>store;
    int target=0;

    store=fourSum(arr,target);

    cout<<"Required pairs whose sum=target are :"<<endl;
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