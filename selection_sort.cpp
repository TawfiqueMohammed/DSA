#include<bits/stdc++.h>
using namespace std;

void selection_sort(int A[], int n){
    for(int i=0; i<n-1; i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
            if(A[j]<A[min_idx]){
                min_idx=j;
            }
        }
        swap(A[min_idx], A[i]);
    }
}

int main(){
    int A[]={7,3,43,22,55,43,52,4,6,9,12};
    int n=sizeof(A)/sizeof(A[0]);
    
    cout<<"Array before sort: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

    selection_sort(A,n);

    cout<<"Array after sort: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }

}