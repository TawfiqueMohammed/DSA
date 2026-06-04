#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {-1,-2,3,-2,5,3};
    int n = v.size();
    int tar = 53;
    bool isFound = false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                for(int l=k+1; l<n; l++){
                    if(v[i]+v[j]+v[k]+v[l] == tar){
                        isFound = true;
                    }
                }
            }
        }
    }
    if(isFound) {
        cout << "Found";
    }
    else {
        cout << "Not Found";
    }
}