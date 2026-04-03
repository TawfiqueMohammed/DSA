#include<bits/stdc++.h>
using namespace std;

vector <int> pairSum(vector <int> v, int target, int size){
    vector <int> newVec;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(v[i]+v[j] == target){
                newVec.push_back(i);
                newVec.push_back(j);
                return newVec;
            }
            
        }
    }
    return newVec;
}

int main(){
    vector <int> v = {1,4,3,3,5,1};
    int size = v.size();
    int target = 8;

    vector <int> ans = pairSum(v, target, size);

    cout << ans[0] << " " << ans[1];
}