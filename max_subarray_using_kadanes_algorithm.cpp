#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[]={1,-2,3,4,5};
    int n = sizeof(A)/sizeof(A[0]);
    
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0; i<n; i++){
        currentSum += A[i];
        if(currentSum > maxSum){
            maxSum = currentSum;
        }
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << maxSum << endl;
}