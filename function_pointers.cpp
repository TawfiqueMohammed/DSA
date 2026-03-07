#include<bits/stdc++.h>
using namespace std;

void printHello(const char* name){
    cout<<name;
}

int add(int a, int b){
    return a+b;
}

int main(){
    int c;
    int (*p)(int,int);
    p = &add; // it's same as "p = add". Function name will return us pointer.
    c = (*p)(2,3); // it's same as "c = p(2,3)" dereferencing and executing the fn
    cout<<c<<endl;

    void (*ptr)(const char*);
    ptr = printHello;
    ptr("TAWFIQUE");
}