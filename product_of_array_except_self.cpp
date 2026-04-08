#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {3,2,1,3};
    int n = sizeof(A)/sizeof(A[0]);
    int product = 1;
    int B[n];
    for(int i = 0; i < n; i++){
        product *= A[i]; 
    }

    // cout << product << endl;

    for(int i = 0; i < n; i++){
        B[i] = product / A[i];
    }

    for(int i = 0; i < n; i++){
        cout << B[i] << " ";
    }

}