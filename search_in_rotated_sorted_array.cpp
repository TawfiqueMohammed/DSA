#include<bits/stdc++.h>
using namespace std;

int searchInRotatedSortedArray(vector<int> nums, int start, int end, int target){
    
    while(start <= end){
        int mid = start + (end-start) / 2;
        if(nums[mid] == target) return mid;
        if(nums[mid] >= nums[start]) {
            if(nums[start] <= target && target <= nums[mid]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        else {
            if(nums[mid] <= target && target <= nums[end]){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
    }
}

int main(){
    vector<int> nums = {3,4,5,6,7,0,1,2};

    int start = 0;
    int end = nums.size() - 1;
    int target = 1;
    
    cout << searchInRotatedSortedArray(nums, start, end, target);
    
}