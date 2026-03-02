#include<bits/stdc++.h>
using namespace std;

int sum_of_two_numbers(int* a, int* b){
    int c = (*a) + (*b);

    return c;
}

int main(){
    int a=2, b=3;
    int result = sum_of_two_numbers(&a,&b);

    cout<<result;
}