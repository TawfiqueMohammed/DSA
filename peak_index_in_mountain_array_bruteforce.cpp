#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5,3,2,1};
    int n = nums.size();
    for(int i = 1; i < n-1; i++){
        if(nums[i-1] <= nums[i] && nums[i]>= nums[i+1]){
            cout << i; // it will print the index of the peak element
        }
    }
}