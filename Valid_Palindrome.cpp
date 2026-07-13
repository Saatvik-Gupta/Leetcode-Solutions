/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.


LEETCODE Problem Number---125
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


bool isPalindrome(string s) {

    int start=0;
    int end=s.length()-1;
    while(start<end){

        if(!isalnum(tolower(s[start]))){
            start++;
            continue;
        }
        
        if(!isalnum(tolower(s[end]))){
            end--;
            continue;
        }

        if(tolower(s[start])!=tolower(s[end])) return false;

        start++;end--;
    }

    return true;
}

int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;

    if(isPalindrome(s))
    cout<<"String is Valid Palindromic!"<<endl;

    else  cout<<"Not Valid Palindromic!"<<endl;

    return 0;
}