#include<bits/stdc++.h>
using namespace std;

int sumOfnNums(int n){
    if(n == 1){
        return 1;
    }
    return n + sumOfnNums(n-1);
}

int main(){
    int n = 6;
    int ans = sumOfnNums(n);
    cout << ans;
}