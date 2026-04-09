#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {3,2,1,3};
    int n = sizeof(A)/sizeof(A[0]);
    int B[n];
    
    for(int i = 0; i < n; i++){
        int product = 1;

        for(int j = 0; j < n; j++){
            if(i != j){
                product *= A[j];
            }
        }
        
        B[i] = product; 
    }

    for(int i = 0; i < n; i++){
        cout << B[i] << " ";
    }

}