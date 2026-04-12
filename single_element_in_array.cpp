#include<bits/stdc++.h>
using namespace std;

int singleElementInArray(vector<int> nums, int n){
    int start = 0;
    int end = n - 1;

    if(n == 1) return nums[0];

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(mid == 0 && nums[mid] != nums[mid+1]) return nums[mid];
        if(mid == n-1 && nums[mid] != nums[n-2]) return nums[mid];

        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }
        if(mid%2 == 0){
            if(nums[mid] == nums[mid-1]){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        
        else{
            if(nums[mid] == nums[mid-1]){
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

    }
    return -1;
}

int main(){
    vector<int> nums = {1,1,2,2,3,3,4,4,8};
    int n = nums.size();
    
    cout << singleElementInArray(nums, n)<<endl;
}