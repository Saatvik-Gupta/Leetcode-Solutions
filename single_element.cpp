// Given an array consists of all unique elements except for one display it
// ex nums={1,4,5,4,7,5,7} output: 1
/* Using XOR concept
we know num ^ num =0
num^0=num
LEETCODE---
*/

#include<iostream>
using namespace std;
#include<vector>

// one more concept to check wheather is in the power of 2 or not use bitwise &
bool check_pow2(int num){

    if(num>0 && (num & (num-1)) ==0){
        return true;
    }
    return false;
}

int main(){

    int num;
    vector<int> nums={1,4,5,4,7,5,7};

    int ans=0;

    for(int value: nums){
        ans=ans^ value;
    }

    cout<<"Single element in the given vector is: "<<ans<<endl;

    cout<<"Now checking weather the given number is in the power of 2 or not---"<<endl;

    cout<<"Enter the Number to be checked:";
    cin>>num;
    if(check_pow2(num)){
        cout<<"Yes! "<<num<<" is in the power of 2"<<endl;
    }
    else{
        cout<<"Oooooo! No-- "<<num<<" Not in the power of 2"<<endl;
    }
    return 0;

}