#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int target){
    int start = 0;
    int end = nums.size() - 1;
    int mid;
    

    while(start <= end){
        mid = (start + end) / 2;
        if(target == nums[mid]) return mid;
        if(nums[mid] < target){
            start = mid + 1;
        }
        else end = mid - 1;
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 3;
    cout << binarySearch(nums, target);
}