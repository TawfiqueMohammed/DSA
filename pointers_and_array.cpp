#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[5]={1,2,3,4,5};
    int *p = &A[0]; // it's not needed as Array decay works here.

    /* int *p = &a[3];
    cout<<p<<" "<<a<<" "<<*p<<" "<<&a[0]<<endl; */

    for(int i=0; i<5; i++){
        cout<<"Address: "<< &A[i]<<" "<< "Value: "<< A[i] << endl; 
        cout<<"Address: "<< A+i<<" "<< "Value: "<< *(A+i) << endl;

        // &A[i] is A+i 
        // that's why, &A[0] is A
        
        // A[i] is *(A+i)
    }

    // showing the array values in reverse order by using pointer

    int *q = A + 4;
    cout<<"values: " << " ";
    for (int i=0; i<5; i++){
        cout<< *q << " ";
        q--;
    }

}