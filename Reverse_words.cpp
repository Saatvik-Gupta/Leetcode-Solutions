/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

Example 1:
Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2:
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

LEETCODE Problem Number---151
*/

#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

void Reverse_Words(string &s){

    int n=s.length();
    // first of all reverse the string and then extract words
    // then on words reverse them and add to ans

    string ans="";
    cout<<"Original string :"<<endl;

    for(auto val: s){
        cout<<val<<" ";
    }
    cout<<endl;

    reverse(s.begin(),s.end());

    for(int i=0; i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){ // words extraction
            word+=s[i];
            i++;
        }

        reverse(word.begin(),word.end());

        if(word.length()>0){
            ans+=" "+ word;
        }
    }

    string store=ans.substr(1);

    cout<<"Reverse Words Sring: "<<endl;

    for(auto val: store){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){

    string s="the sky is blue";
    Reverse_Words(s);
    return 0;
}