#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(A)/sizeof(A[0]);

    int currentSum = 0;
    int maxSum = INT_MIN;
    int start = 0;
    int maxStart = -1; 
    int maxEnd = -1; 

    for(int i = 0; i < n; i++){
        currentSum += A[i];

        if(currentSum > maxSum){
            maxSum = currentSum;
            maxStart = start;
            maxEnd = i;
        }

        if(currentSum < 0){
            currentSum = 0;
            start = i+1;
        }
    }
    // showing the maximum sum of the given array
    cout << maxSum << endl;

    // showing the subarray of the given array which has the maximum sum
    cout<< "[";
    for(int i = maxStart; i <= maxEnd; i++){
        cout << A[i] << (i == maxEnd ? "" : ",");
    }
    cout<< "]";
}