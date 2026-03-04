#include<bits/stdc++.h>
using namespace std;

int *sum_of_two_numbers(int* a, int* b){

    // here, memory allocation is done at heap because we are transferring address from top to bottom
    // if we do it on stack the memory we saved would be de-allocated. that's why we will not get the value of c at main fn.
    // there will be no problem if the address is transferred to bottom to top. like transferring the addresses
    // of a or b to the sum_of_two_numbers() function from main function

    int *c = (int*)malloc(sizeof(int));

    *c= (*a) + (*b);
    return c;
}

int main(){
    int a=2, b=3;
    int *result = sum_of_two_numbers(&a,&b);
    cout<<result<<endl;
    cout<<*result;
}