#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,4,5,6,7,9};
    int n = v.size();
    int actualSum = 0, actualSqSum = 0;

    for(int i=0; i<n; i++){
        actualSum += v[i];
        actualSqSum += (long long)v[i]*v[i];
    }

    long long expectedSum = ((long long)n * (n+1)) / 2;
    long long expectedSqSum = ((long long)n * (n+1) * (2*n+1)) / 6;

    long long X = actualSum - expectedSum;
    long long Y = (actualSqSum - expectedSqSum) / X;

    int R = (X+Y)/2;
    int M = Y-R;

    cout << R << " " << M;
 
    // cout << actualSum << " " << actualSqSum;
}