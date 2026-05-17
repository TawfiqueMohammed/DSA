#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,6,7,3,8,9};
    int missing = -1, repeating = -1;
    for(int i=1; i<=v.size(); i++){
        int count = 0;
        for(int j=0; j<v.size(); j++){
            if(v[j] == i) count++;
        }
        if(count == 2) repeating = i;
        if(count == 0) missing = i;
    }
        cout << missing << " " << repeating;

}