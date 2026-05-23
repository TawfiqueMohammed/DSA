#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,3,1,-1,5,4};
    int n = nums.size();
    int target = 15;
    bool isFound = false;
    for(int i=0; i<n; i++){
        int a=nums[i];
        for(int j=i+1; j<n; j++){
            int b=nums[j];
            for(int k=j+1; k<n; k++){
                int c=nums[k];
                if(a+b+c == target){
                    cout << a << " " << b << " " << c << " " << endl;
                    isFound = true;
                }
            }
        }
    }
    if(isFound){
        cout << "Found";
    }
    else {
        cout << "Not Found";
    }
}