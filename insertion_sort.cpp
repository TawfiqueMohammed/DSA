#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int A[], int n){
    for(int i=1; i<n; i++){
        int temp = A[i];
        int j=i-1;
        while(j>=0 && A[j]>temp){    
            A[j+1]=A[j];
            j--;
        }
        A[j+1] = temp;
    }
}

int main(){
    int A[]={3,41,1,22,23,12};
    int n = sizeof(A)/sizeof(A[0]);

    insertion_sort(A,n);

    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    
}