/*
1). Power of 2-->Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.
LEETCODE Problem Number-231

2). Power of 3-->Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.
LEETCODE Problem Number-326

3). Power of 4-->Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.
LEETCODE Problem Number-342
*/

#include<iostream>
using namespace std;

bool Power_2(int n){
    if(n<=0) return false;

    if(n>0 && ( (n & (n-1))==0 ) )
    return true;

    return false;
}

bool Power_3(int n){

    if(n<=0) return false;

    while(n%3==0){
        n/=3;
    }
    return n==1;
}

bool Power_4(int n){

    if(n<=0) return false;

    while(n%4==0){
        n/=4;
    }
    return n==1;

}

int main(){
    int num;
    cout<<"Enter the Number to be checked:";
    cin>>num;
    if(Power_2(num)){
        cout<<"Number "<<num<<" is in the power of 2"<<endl;
    }

    else{
        cout<<"Number "<<num<<" is not in the power of 2! OOPS @23#$"<<endl;
    }
    return 0;
}