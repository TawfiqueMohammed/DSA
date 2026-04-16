#include<bits/stdc++.h>
using namespace std;
int dnf(vector<int> &A, int n){ // past mistake: I forgot to type & sign before A; it's used because we are passing value
    // by reference as we are transforming the full array given in the main function, if we don't use & sign the array given will not be changed
    int mid = 0, low = 0, high = n-1;

    while(mid <= high){
        if(A[mid] == 0){
            swap(A[mid], A[low]);
            low++;
            mid++;
        }

        else if(A[mid] == 1){ // past mistake: I was using only if instead of else if or else; 
            // it's important because we want only one action in a single loop
            mid++;
        }

        else{
            swap(A[mid], A[high]);
            high--;
        }
    }
}

int main(){
    vector<int> A = {0,1,1,0,0,2,0,2,2,2,1,1,2,0};
    int n = A.size();
    dnf(A, n);
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

}