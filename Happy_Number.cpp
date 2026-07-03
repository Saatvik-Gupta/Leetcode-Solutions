// A happy number is a number whose repeatedly sum of the squares of digits finally leads to 1
// ex:- 7 is a Happy Number as
/*
7^2= 49
4^2 + 9^2=>16 + 81=>97
9^2 + 7^2=>81 + 49=>130
1^2 + 3^2 + 0^2=>10
1^2 + 0^2=1 Thus a Happy Number

LEETCODE Problem Number---
*/

#include<iostream>
using namespace std;
#include<unordered_set>

int sum_digits(int num){
    int sum=0;

    while(num!=0){
        int digit=num%10;
        sum+= digit * digit;
        num/=10;
    }

    return sum;
}

bool check_happynum(int num){
    unordered_set<int>s;

    while(num!=1 && s.find(num)==s.end()){

        s.insert(num);
        num=sum_digits(num);
    }

    return num==1;

}

int main(){

    int n;
    cout<<"Enter the Number to be checked as a Happy Number:";
    cin>>n;
    
    if(check_happynum(n)){
        cout<<n<<" is a Happy Number"<<endl;
    }

    else{
        cout<<"Not a Happy Number"<<endl;
    }

    return 0;
}