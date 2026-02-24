#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=5;
    int* ptr = &x;
    cout<<"x= "<< x <<endl;
    cout<< *ptr <<endl;
    cout<<"address of x: " << (long long) &x <<endl;

    // cout<<*ptr+1<<endl;
    // cout<<(long long) (&x+1)<<endl;

    int** ptr2 = &ptr;
    cout<<(long long)ptr<<endl;
    cout<<(long long)*ptr2<<endl;
    cout<<(long long)&ptr<<endl;
    cout<<(long long)**ptr2<<endl;
}