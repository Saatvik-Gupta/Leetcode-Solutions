// We are given with a array containing heights and have to find max area enclosed within the heights

//LEETCODE Problem Number---11

#include<iostream>
using namespace std;
#include<vector>

int max_area(vector<int>heights){

    int left=0;
    int right=heights.size()-1;
    int ans=INT32_MIN;

    while( left<right){
        int height= min(heights[left],heights[right]);
        int width= right - left;

        int area= height * width;

        ans= max(ans,area);

        if(heights[left]<heights[right]){
            left++;
        }
        else{
            right--;
        }
    }

    return ans;
}

int main()
{
    vector<int>heights={1,4,6,3,7};

    int store=max_area(heights);
    cout<<"Maximum area of water filled: "<<store<<" sq.units"<<endl;
    return 0;
}