// To calculate (base)^exponent using binary exponentiation x^n--->Pow(x,n)

// LEETCODE Problem Number---50

#include<iostream>
using namespace std;

double Pow(double x,int n){

    long long int binum=n;
    double ans=1.0;

    if(n==0) return 1;
    if(n==1) return x;
    if(x==0) return 0;

    if(binum<0){ // If power negative
        binum=-binum;
        x=1/x;
    }

    while(binum!=0){

        if(binum % 2==1){
            ans*=x;
        }
        x=x*x;

        binum=binum/2;
    }
    return ans;
}

int main(){

    double base;
    int expo;
    cout<<"Enter the base:";
    cin>>base;
    cout<<"Enter the exponent:";
    cin>>expo;

    cout<<base<<" ^ "<<expo<<" is: "<<Pow(base,expo)<<endl;

    return 0;
}
