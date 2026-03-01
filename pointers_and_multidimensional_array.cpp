#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[2][3] = {{2,3,6},{4,5,8}};

    int (*p)[3] = A;

    cout<<A<<" "<<&A[0]<<endl;
    cout<<*A<<" "<<A[0]<<" "<<&A[0][0]<<endl;
    cout<<A+1<<" "<<&A[1]<<endl;
    cout<<*(A+1)<<endl;

}