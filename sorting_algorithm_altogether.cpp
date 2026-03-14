#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int A[], int n){

    for(int i=0; i<n-1; i++){
        bool swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}



int main(){
    int A[]={4,3,40,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    bubble_sort(A,n);
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
}