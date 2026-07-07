// To find unique element in sorted array
/*
ex: nums=[1,1,2,2,5,6,6,9,9]
single element is 4 at index 4
*/

#include<iostream>
using namespace std;
#include<vector>

int main()
{
    // Method-1 Bitwise XOR Approach, Complexity: O(n)
    vector<int>nums={1,1,2,2,5,6,6,9,9};
    int ans=0;

    for( int value: nums){
        ans= ans^value;
    }

    cout<<"Single value in given array is: "<<ans<<endl;
    return 0;
}
