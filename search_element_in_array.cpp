#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[100],n,i;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int a;
    cin>>a;

    bool found = false;
    for(i=0; i<n; i++){
        if(a==arr[i]){
            cout<< i << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout<< -1<< endl;
    }

}