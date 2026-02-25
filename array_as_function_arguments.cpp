#include<bits/stdc++.h>
using namespace std;

int sumOfElements(int *A, int size){
    int sum=0;
    for(int i = 0; i<size; i++){
        sum = sum+A[i];
    }

    return sum;

}

void doubleTheValue(int A[], int size){
    for(int i = 0; i < size; i++){
        A[i] = 2 * A[i];
    }
}

int main(){
    int arr[]={1,2,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<sumOfElements(arr, size)<<endl;

    doubleTheValue(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}