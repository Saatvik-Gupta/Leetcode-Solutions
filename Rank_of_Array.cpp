/*
Given an array of integers arr, replace each element with its rank.
The rank represents how large the element is. The rank has the following rules:
Rank is an integer starting from 1.
The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
Rank should be as small as possible.
 
Example 1:
Input: arr = [40,10,20,30]
Output: [4,1,2,3]
Explanation: 40 is the largest element. 10 is the smallest. 20 is the second smallest. 30 is the third smallest.

LEETCODE Problem Number---1331
*/

#include<iostream>
using namespace std;
#include<vector>
#include<set>
#include<unordered_map>

void arrayRankTransform(vector<int>& arr) {

    int n= arr.size();
    vector<int>ans;
    int rank=1;

    set<int>s;

    for(int val: arr){
        s.insert(val); // unique values in sorted order 10,20,30,40
    }

    unordered_map<int,int>m;

    for (int val: s){

        m[val]=rank;
        rank++;
    }

    for ( int value: arr){
        ans.push_back(m[value]);
    }

    cout<<"Rank of elements are:-----"<<endl;
    for( int val: ans){
        cout<<val<<" ";
    }
    cout<<endl;

}

int main(){

    vector<int>arr={40,10,20,30};
    arrayRankTransform(arr);
    return 0;
}
