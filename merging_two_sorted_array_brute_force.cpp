#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A = {2,3,4};
    vector<int> B = {1,6,7,1,3,4,0};

    int m = A.size();
    int n = B.size();
    int newSize = m + n;
    vector<int> newArray(newSize);

    for(int i = 0; i < m; i++){
        newArray[i] = A[i];
    }
    for(int i = m, j = 0; i < newSize && j < n; i++, j++){
        newArray[i] = B[j];
    }
    
    sort(newArray.begin(), newArray.end());

    for(int i = 0; i < newSize; i++){
        cout << newArray[i] << " ";
    }
}