#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {3,2,34,1,5};
    int start = 0;
    int n = sizeof(A)/sizeof(A[0]);
    int end = n - 1;
    while(start <= end){
        swap(A[start], A[end]);
        start++;
        end--;
    }

    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
}