#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int A[], int n){   // we can write -> int *A instead of -> int A[]. they are the same
    for(int i=0; i<n-1; i++){
        bool flag=0;

        for(int j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                int temp=A[j];
                A[j] = A[j+1];
                A[j+1]=temp;

                flag=1;
            }
        }
        if (flag==0) break;
    }
}

void displaySortedArray(int A[], int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int A[]={6,3,2,5,2,1};
    int n = 6;

    // int n;
    // cin>>n;

    // int A[100];
    // for(int i=0; i<n; i++){
    //     cin>>A[i];
    // }

    bubbleSort(A,n);
    displaySortedArray(A,n);


}