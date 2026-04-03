#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {3,2,3,2,2,4};
    int n = v.size();

    // this outer loop is for check every elements of array
    for(int i = 0; i < n; i++){
        int freq = 0;
        // this inner loop works for updating frequency
        for(int j = 0; j < n; j++){
            if(v[i] == v[j]){
                freq++;
            }
        }
        
        // cout << "checking: " << v[i] << ", frequencey: " << freq << endl;

        if(freq > (n/2)){
            cout << v[i] << " ";
            return 0;
        }
    }
}