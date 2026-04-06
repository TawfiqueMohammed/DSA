#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {1,8,6,2,5,4,8,3,7};

    int n = sizeof(A)/sizeof(A[0]);

    int left = 0, right = n - 1, maxWater = 0;
    

    while(left < right){
        int ht = min(A[left], A[right]);
        int w = right - left;
        int area = ht * w;

        maxWater = max(maxWater, area);

        if(A[left] < A[right]) {
            left++;
        }

        else {
            right--;
        }
    }

    cout << maxWater;
}