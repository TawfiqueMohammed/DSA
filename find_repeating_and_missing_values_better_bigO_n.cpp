#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,4,5,6,8,9}; // input is always from 1 to n
    int n = v.size();

    int repeating = -1, missing = -1;
    vector<int> freq(n+1, 0);
    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }

    for(int i=1; i<n+1; i++){ //Because values in the array go from 1 to n, not 0 to n-1!
        if(freq[i] == 2) repeating = i;
        if(freq[i] == 0) missing = i;
    }
    cout << missing << " " << repeating;
}