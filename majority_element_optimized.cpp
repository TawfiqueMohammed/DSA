#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {3,3,2,1,2,3,3};
    int n = v.size();
    sort(v.begin(), v.end());
    // for(int val : v){
    //     cout << val << " ";
    // }

    int freq = 1, ans = v[0];
    for(int i = 1; i < n; i++){

        if(v[i] == v[i-1]){
            freq++;
        }
        else{
            freq = 1; 
            ans = v[i];
        }
        cout << v[i] << " " << "freq: " << freq << endl;
        if(freq > n/2){
            cout << ans;
            return 0;
        }
    }
}