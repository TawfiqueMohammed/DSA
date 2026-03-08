#include<bits/stdc++.h>
using namespace std;

void A(){
    cout << "hello";
}

void B(void (*ptr)()){
    (*ptr)();    // same as --> ptr() as function itself returns a pointer;
}

int main(){
    void (*p)() = A;
    B(p);              // if I write B(A) or B(&A), it will still generate the same result as they are same 
}