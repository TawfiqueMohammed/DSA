#include<bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(vector<int> nums, int start, int end, int target){
    if(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] > target) return recursiveBinarySearch(nums, start, mid - 1, target);
        if(nums[mid] < target) return recursiveBinarySearch(nums, mid + 1, end, target);
        else return mid;
    }
    return -1;
}

int main(){
    vector<int> nums = {-1,0,2,3,5,7};
    int start = 0;
    int end = nums.size() - 1;
    int target = 5;

    cout << recursiveBinarySearch(nums, start, end, target) << endl;
}