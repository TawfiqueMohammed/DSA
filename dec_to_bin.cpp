#include<bits/stdc++.h>
using namespace std;

int bin_to_dec(int dec){
    int ans = 0;
    int pow = 1; // 10^0

    while(dec > 0){
        int rem = dec % 2;
        // cout << rem;
        ans = ans + (rem * pow);
        dec = dec / 2;        
        pow = pow * 10;
    }
    return ans;
}

int main(){
    // int dec = 5;

    for(int dec = 1; dec <= 10; dec++){
        cout << bin_to_dec(dec) << endl;
    }
}