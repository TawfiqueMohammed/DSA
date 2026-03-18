#include<bits/stdc++.h>
using namespace std;

// void bubble_sort(int A[], int n){

//     for(int i=0; i<n-1; i++){
//         bool swapped = false;
//         for(int j=0; j<n-i-1; j++){
//             if(A[j]>A[j+1]){
//                 int temp = A[j];
//                 A[j]=A[j+1];
//                 A[j+1]=temp;
//                 swapped = true;
//             }
//         }
//         if(!swapped) break;
//     }
// }


void selection_sort(int A[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(A[j]<A[min]){
                min = j;
            }
        }

        if(min!=i){
            swap(A[i], A[min]);
        }
    }
}



int display(int A[], int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
}


int main(){
    int A[]={4,3,40,1,5,6};
    int n=sizeof(A)/sizeof(A[0]);
    // bubble_sort(A,n);
    selection_sort(A, n);

    display(A,n);
    
}