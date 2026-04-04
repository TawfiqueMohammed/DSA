#include<bits/stdc++.h>
using namespace std;

int main(){
    int dec = 5;
    int ans = 0;
    int pow = 1; // 10^0

    while(dec > 0){
        int rem = dec % 2;
        cout << rem;
        ans = ans + (rem * pow);
        dec = dec / 2;        
        pow = pow * 10;
    }
    cout << endl << ans;
}