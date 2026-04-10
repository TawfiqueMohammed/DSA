#include<bits/stdc++.h>
using namespace std;

int peakIndex(vector<int> nums, int start, int end){
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
            return mid;
        }
        // here we should realize where mid is placed; if it's placed in increasing order line which means
        // nums[mid] > nums[mid-1];
        // then we should check for the peak in the right side of the mid
        else if(nums[mid] > nums[mid - 1]){
            start = mid + 1; 
        }
        // if peak is not in the right side; peak must be on the left side
        else end = mid - 1;
    }
    return -1;
}

int main(){
    vector<int> nums = {0,3,8,9,5,2};
    int start = 1;
    int end = nums.size() - 2;
    
    cout << peakIndex(nums, start, end) << endl; // it will print the index of the peak element
}