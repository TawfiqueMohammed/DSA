#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &A, int n){
    int pivot = -1;
    for(int i = n-2; i >= 0; i--){ // finding pivot
        if(A[i] < A[i+1]){
            pivot = i;
            break;
        }
    }

    if(pivot == -1){ // if pivot is not there
        reverse(A.begin(), A.end());
        return; // as pivot is not here function will return 
    }

    // cout << A[pivot] << endl;

    for(int i = n-1; i > pivot; i--){ // swapping pivot with it's rightmost element which is greater than it
        if(A[i] > A[pivot]){
            swap(A[i], A[pivot]);
            break;
        }
    }
    

    int i = pivot+1,j = n-1;  // reversing the array element from the next element of pivot the end of the array
    while(i <= j){
        swap(A[i], A[j]);
        i++, j--;
    }
}

int main(){
    vector<int> A = {1, 2, 4, 6, 5, 3};
    int n = A.size();
    // cout << nextPermutation(A, n) << endl;
    
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    nextPermutation(A, n);

    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
}