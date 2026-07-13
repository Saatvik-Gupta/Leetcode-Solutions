/*
Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

Note: The characters in the array beyond the returned length do not matter and should be ignored.

Example 1:
Input: chars = ["a","a","b","b","c","c","c"]
Output: 6
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".
After modifying the input array in-place, the first 6 characters of chars should be ["a","2","b","2","c","3"].

Example 2:
Input: chars = ["a"]
Output: 1
Explanation: The only group is "a", which remains uncompressed since it is a single character.
After modifying the input array in-place, the first character of chars should be ["a"].

LEETCODE Problem Number---443
*/

#include<iostream>
using namespace std;
#include<string>
#include<vector>

void string_compress(vector<string>s){

    int n=s.size();
    int idx=0;
    string ch;
    int count;
    for( int i=0; i<n; i++){
         ch=s[i];
         count=0;
         // calculating the number of times ch occur

         while(i<n && s[i]==ch){
            count++; i++;
         }

         // Now two cases count=1 or count>1

         if(count ==1){
            s[idx]=ch;
            idx++;
         }

         else // count>1 in-place ch along with its count
         {
            s[idx]=ch; idx++;
            string store_count= to_string(count);
            for(char dig: store_count){
                s[idx]=dig;
                idx++;
            }
         }
         i--;
    }

    s.resize(idx);
    cout<<"Compressed String is:"<<endl;
    for(string val : s){
        cout<<val<<" ";
    }
    cout<<endl;
    int length=s.size();
    cout<<"Length of compressed string is:"<<length;

}

int main(){

    vector<string>s={"a","a","b","b","c","c","c"};
    string_compress(s);
    return 0;
}