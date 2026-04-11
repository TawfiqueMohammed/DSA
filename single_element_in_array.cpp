#include<bits/stdc++.h>
using namespace std;

int singleElementInArray(vector<int> nums, int start, int end){
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return mid;
        }
    }
}

int main(){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    int start = 0;
    int end = nums.size() - 1;
}