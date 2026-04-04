#include<bits/stdc++.h>
using namespace std;

int main(){
    int bin = 110101;
    int ansDec = 0;
    int pow = 1; // 2^0

    while(bin>0){
        int rem = bin % 10;
        ansDec = ansDec + (rem * pow);
        pow = pow * 2;
        bin = bin / 10;
    }

    cout << ansDec;
}