#include<bits/stdc++.h>
using namespace std;


void Print(char *b){
    for(int i=0; i<=sizeof(b); i++){
        cout<<b[i];
    }
    cout<<endl;
}

// using pointer
void secondPrint(char *y){
    while(*y!='\0'){
        cout<<*y;
        *y++;
    }
    cout<<endl;
}

int main(){
    char a[]="PEACE";
    Print(a);
    cout<<a<<endl;

    char x[] = "CONFLICT";
    secondPrint(x);
    cout<<x;

}