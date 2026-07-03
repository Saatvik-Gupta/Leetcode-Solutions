// An Armstrong Number is a number whose sum of the power of its digits it contains is equal to the original number
/*ex:
153 is an Armstrong Number
digits count=3
1^3 + 5^3 + 3^3=>1+125+27==>153

LEETCODE Problem Number---1134
*/

#include<iostream>
using namespace std;

int digit(int num){
    // count no. of digits
    int count=0;
    while(num!=0){
        count++;
        num/=10;
    }
    return count;
}

bool check_Armstrong(int num){
    int temp=num;
    int sum=0;
    int c=digit(num);

    while(temp!=0){
        int digit=temp%10;
        int p=1;
        for(int i=1;i<=c;i++){
            p *=digit;
        }
        sum+=p;
        temp/=10;
    }

    return sum==num;
}

int main(){
    int num;
    cout<<"Enter the Number to be checked as Armstrong:";
    cin>>num;

    if(check_Armstrong(num)){
        cout<<num<<" is an Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Arnstrong Number"<<endl;
    }
    return 0;
}
