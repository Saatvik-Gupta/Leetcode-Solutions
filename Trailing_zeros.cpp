/*
Given an integer n, return the number of trailing zeroes in n!.

Note that n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1.

Example 1:
Input: n = 3
Output: 0
Explanation: 3! = 6, no trailing zero.

Example 2:
Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.

LEETCODE Problem Number---172
*/

#include<iostream>
using namespace std;
#include<vector>

int Trailing_zeroes_Count(int num){
    // Applying this method if number is small approx i.e n<20

    int count=0;
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    while(fact!=0 && fact%10==0){
        fact=fact/10;
        count++;
    }
    return count;
}

int Trailing_zeroes_Count_Legendres(int num){

    // If range(number)is too high use Legendre formula
    int count=0;
    while(num>=5){
        num=num/5;
        count+=num;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter rhe number whose Factorial is to find:";
    cin>>n;
    // int value=Trailing_zeroes_Count(n);
    // cout<<"Trailing zeroes are:"<<value<<endl;

    int store=Trailing_zeroes_Count_Legendres(n);
    cout<<"Trailing zeroes are:"<<store<<endl;

    return 0;
}

