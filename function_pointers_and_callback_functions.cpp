#include<bits/stdc++.h>
using namespace std;

void sum(int a, int b){
    cout << a + b << endl;
}

void sub(int a, int b){
    cout << a - b << endl;
}

// callback function 
void display(void (*ptr)(int, int)){
    ptr(7,3);
}

int main(){
    display(sum);
    display(sub);
}