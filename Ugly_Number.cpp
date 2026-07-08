//An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.

/*
Given an integer n, return true if n is an ugly number.

Example 1:
Input: n = 6
Output: true
Explanation: 6 = 2 × 3

LEETCODE Problem Number---263
*/

#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter the number to be checked as an ugly number:";
    cin>>num;
    int temp=num;

    while(num%2 ==0){
        num=num/2;
    }

    while(num%3 ==0){
        num=num/3;
    }

    while(num%5 ==0){
        num=num/5;
    }

    if(num==1){
        cout<<temp<<" is an Ugly Number"<<endl;
    }
    else{
        cout<<"Not an Ugly Number"<<endl;
    }

    return 0;
}