#include<bits/stdc++.h>
using namespace std;

int mergeTwoSortedArray(vector<int> &A, vector<int> B, int idx, int m, int n){ // past mistake: I forgot to use &. As we are passing data by reference.
    
    int i=m-1, j=n-1;
    while(i>=0 && j>=0){
        if(A[i] >= B[j]){
            A[idx] = A[i];
            idx--; i--; 
        } else {
            A[idx] = B[j];
            idx--, j--;
        }
    }

    while(j>=0){  // past mistake: i forgot to use this loop. this loop is to check if elements of B is still there
        A[idx] = B[j];
        idx--, j--;
    }
} 

int main(){
    vector<int> A = {1,2,3};
    vector<int> B = {2,5,6};
    int m = A.size();
    int n = B.size();
    int idx = m+n-1;
    mergeTwoSortedArray(A, B, idx, m, n);

    for(int i = 0; i <= idx; i++){
        cout << A[i] << " ";
    }

}