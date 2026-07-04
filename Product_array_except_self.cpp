// To calculate product of array elements for a particular index except for the that index
/*Ex: nums={1,2,3,4}
ans={24,12,8,6}

for index 0 in ans: 2*3*4
for index 1: 1*3*4
index 2: 1*2*4
index 3: 1*2*3

without using division ('/') operator
LEETCODE Problem Number---238
*/

#include<iostream>
using namespace std;
#include<vector>

void product(vector<int>nums){

    int n=nums.size();
    vector<int>ans(n,1);
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);

    for(int i=1; i<n; i++){
        prefix[i]=prefix[i-1]* nums[i-1];
    }

    for(int i=n-2; i>=0; i--){
        suffix[i]=suffix[i+1]* nums[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }

    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>nums={1,2,3,4};
    //int n=nums.size();
    //vector<int>ans(n,1);
    // // Simple approach using division
    // int pro=1;
    // for(int val: nums){
    //     pro*=val; //24
    // }

    // for(int i=0; i<n;i++){
    //     ans[i]=(pro/nums[i]);
    // }
    // for(int val: ans){
    //     cout<<val<<" ";
    // }
    product(nums);

    return 0;

}
