#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {6,2,3,1,4};
    int n = sizeof(A) / sizeof(A[0]);

    int bestBuy = A[0];
    int bestSell, maxProfit = 0;

    for(int i = 1; i < n; i++){
        int diff = A[i] - bestBuy;
        if(A[i] > bestBuy){
            maxProfit = max(maxProfit, diff);
        }
        bestBuy = min(A[i], bestBuy);
    }
    // cout << bestBuy << endl;
    cout << maxProfit << endl;
}