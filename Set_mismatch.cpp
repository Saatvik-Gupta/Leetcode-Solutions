// Given an array where only a single number occur twice and take the place of some other number in the sequence find that duplicate and missing number
/* Example:
nums=[1,2,2,4]
Output: [2,3] where 2 is the duplicate number and 3 is the missing number

LEETCODE Problem Number---645
*/

#include<iostream>
using namespace std;
#include<vector>

int main(){

    vector<int>nums={1,2,2,4};
    int n=nums.size();

    vector<int>ans(2);
    vector<int>freq(n+1,0);
    for(int val:nums){
        freq[val]++;
    }

    for(int i=1; i<=n; i++){
        if(freq[i]==2)// Duplicate number
        {
            ans[0]=i;
        }
        else if(freq[i]==0) ans[1]=i; // Missing number
    }

    cout<<"Duplicate and Missing Number is: ";

    for(int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

