/*
You are given an integer n. Your task is to compute the GCD (greatest common divisor) of two values:

sumOdd: the sum of the smallest n positive odd numbers.
sumEven: the sum of the smallest n positive even numbers.
Return the GCD of sumOdd and sumEven.

Example 1:
Input: n = 4
Output: 4
Explanation:
Sum of the first 4 odd numbers sumOdd = 1 + 3 + 5 + 7 = 16
Sum of the first 4 even numbers sumEven = 2 + 4 + 6 + 8 = 20
Hence, GCD(sumOdd, sumEven) = GCD(16, 20) = 4.

Example 2:
Input: n = 5
Output: 5
Explanation:
Sum of the first 5 odd numbers sumOdd = 1 + 3 + 5 + 7 + 9 = 25
Sum of the first 5 even numbers sumEven = 2 + 4 + 6 + 8 + 10 = 30
Hence, GCD(sumOdd, sumEven) = GCD(25, 30) = 5.

LEETCODE Problem Number---3658
*/

#include<iostream>
using namespace std;

int GCD_Odd_Even_Number(int n){

    int sum_even=0;
    int sum_odd=0;

    // Calculate even sum
    for(int i=1;i<=n;i++){
        sum_even+= (i*2); // --2i--2,4,6,8,10......n
    }

    // Calculate odd sum
    for(int i=1;i<=n;i++){
        sum_odd+= (2*i-1); // 1,3,5,7....n
    }

    // Calculating Gcd by eulers algorithm

    while(sum_even>0 && sum_odd>0){
        if(sum_even>sum_odd) sum_even=sum_even%sum_odd;

        else sum_odd=sum_odd%sum_even;
    }

    if(sum_even==0) return sum_odd;
    else return sum_even;

}

int main(){
    int num;
    cout<<"Enter the Range to find GCD of Even and odd Number's Sum in between:";
    cin>>num;
    int store=GCD_Odd_Even_Number(num);
    cout<<"GCD of Even and Odd Sum in range "<<num<<" is: "<<store<<endl;
    return 0;
}