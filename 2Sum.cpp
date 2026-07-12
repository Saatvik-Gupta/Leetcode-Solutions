/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Time Complexity: O(n) --> Hshing approach

LEETCODE Problem Number---1
*/

#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>


vector<int> twoSum(vector<int>& arr, int target) {

    vector<int>vec;
    int n=arr.size();
    unordered_map<int,int>m;

    for( int i=0; i<n; i++){
        int first=arr[i];
        int second=target-first;

            if( m.find(second) !=m.end()){
            vec.push_back(i);
            vec.push_back(m[second]);
            break;
            }

            m[first]=i; // map ith index value placed 

    }

        return vec;
}

int main(){

    vector<int>arr={2,7,11,15};
    int target=9;
    vector<int>store;

    store=twoSum(arr,target);

    cout<<"Required indices for the target sum "<<target<<" are: "<<endl;
    for( int val:store){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
    
}