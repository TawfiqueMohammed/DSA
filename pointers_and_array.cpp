#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[5]={1,2,3,4,5};
    /* int *p = &a[3];
    cout<<p<<" "<<a<<" "<<*p<<" "<<&a[0]<<endl; */

    for(int i=0; i<5; i++){
        cout<<"Address: "<< &A[i]<<" "<< "Value: "<< A[i] << endl;
        cout<<"Address: "<< A+i<<" "<< "Value: "<< *(A+i) << endl;
    }

}