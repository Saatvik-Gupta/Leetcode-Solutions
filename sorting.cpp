// Sorting simply means to arrange data in either increasing or decreasing fashion
// Here Doing 3 sorting algorithms:- 
// Bubble Sort, Selection sort, Insertion Sort

#include<iostream>
using namespace std;
#include<vector>

void bubblesort(vector<int>nums){

    int n=nums.size();
    cout<<"Elements before sorting:"<<endl;
    for(int val: nums){
        cout<<val<<" ";
    }
    cout<<endl;

    for(int i=0 ; i< n-1; i++){
        for(int j=0; j< n-1-i; j++){
            if(nums[j]>nums[j+1]) // ascending order
            {
                swap(nums[j],nums[j+1]);
            }
        }
    }

    cout<<"Elements after sorting:"<<endl;
    for(int val: nums){
        cout<<val<<" ";
    }
    cout<<endl;

}

int main(){
    vector<int>sort={ 1,6,3,9,7,4};
    bubblesort(sort);
    return 0;
}