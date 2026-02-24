#include<bits/stdc++.h>
using namespace std;

void increment(int *a){
    *a = *a + 1;
}
int second_increment(int x){
    x = x + 1;
    return x;
}

int main(){
    int a = 23;
    int x = 125;
    increment(&a);
    cout<< a <<endl;

    second_increment(x);
    cout << x << endl;
}