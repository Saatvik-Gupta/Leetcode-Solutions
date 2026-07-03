// Palindrome numbers are those which can we read same from both the ends ex-121
// LEETCODE---

#include<iostream>
using namespace std;

int reverse(int num){

    int rev=0;
    if(num<0){
        return 0; // palindrome not defined for -ve numbers
    }
    while(num!=0){
        int digit=num%10;

        if(rev> INT32_MAX || rev==INT32_MAX && digit>7){//  2^31-1 last digit 7
            return 0;
        }

        if(rev<INT32_MIN || rev==INT32_MIN && digit<-8){//  -2^31 last digit 8
            return 0;
        }
        rev= rev*10 + digit;
        num=num/10;
    }

    return rev;
}

int main(){

    int num;
    cout<<"Enter the number to be checked as Palindrome:";
    cin>>num;

    int rev=reverse(num);

    if(num==rev){
        cout<<num<<" is a Palindrome number"<<endl;
    }
    else{
        cout<<num<<" is not a Palindrome number"<<endl;
    }
    return 0;
}
