#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 4, 5, 6, 8, 9};
    int n = v.size();

    long long actualSum = 0, actualSumSq = 0;

    for(int i = 0; i < n; i++){
        actualSum   += v[i];
        actualSumSq += (long long)v[i] * v[i];
    }

    long long expectedSum   = (long long)n * (n+1) / 2;
    long long expectedSumSq = (long long)n * (n+1) * (2*n+1) / 6;

    long long X = actualSum   - expectedSum;    // R - M
    long long Y = (actualSumSq - expectedSumSq) / X;  // R + M

    int R = (X + Y) / 2;  // repeating
    int M = Y - R;         // missing

    cout << "Repeating: " << R << endl;
    cout << "Missing:   " << M << endl;
}