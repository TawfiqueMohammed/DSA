#include<bits/stdc++.h>
using namespace std;

int main(){

    // int n=4; 
    // // cin >> n;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n-i; j++){
    //         cout << "x" << " ";
    //     }
    //     cout << endl;
    // }

    // return 0;


    // int a[]={3,32,3,2,1,2,45,5};
    // int n = sizeof(a)/sizeof(a[0]);
    
    // for(int i = n-1; i >= 0; i--){
    //     cout << a[i] << (i == 0 ? "" : ",");
    // }

    vector<int> v = {1,2,3,4,4,5,6,8,9};
    int sum = 0, sum2 = 0;

    for(int i=0; i<v.size(); i++){
        int mul = v[i] * v[i];
        sum = sum + mul;
        sum2 += v[i];
        // cout << sum2 << " " ;
    }
    cout << endl;
    cout << sum << " " << sum2;
}