/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false 

LEETCODE Problem Number---20
*/

#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s){

    stack<char>st;

    for(char c:s){
        if(c=='(' || c=='[' || c=='{') st.push(c);

        else{
            if (st.empty()) return false;

            if( (c==')' && st.top()!='(')
            || (c==']' && st.top()!='[') ||
            (c=='}' && st.top()!='{') ) return false;

            st.pop();
        }
    }

    return st.empty();

}

int main(){

    string s;
    cout<<"Enter a String to check weather it is Valid or not:";
    cin>>s;

    if(isValid(s)){
        cout<<s<<" is a Valid String! Yessssssss\n";
    }

    else{
        cout<<s<<" is not a Valid String Noooooooo\n";
    }
    return 0; 
}
