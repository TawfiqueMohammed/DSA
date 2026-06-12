#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSumOptimal(vector<int> v, int tar){
    int n = v.size();
    vector<vector<int>> ans;
    sort(v.begin(), v.end());
    for(int i = 0; i<n; i++){
        if(i>0 && v[i] == v[i-1]) continue;
        int j = i+1, k = n-1;
        while(j<k){
            int sum = v[i] + v[j] + v[k];
            if(sum < tar){
                j++;
            }
            else if(sum > tar){
                k--;
            }
            else { // sum = tar
                ans.push_back({v[i], v[j], v[k]});
                j++, k--;
                while(j<k && v[j]==v[j-1]){
                    j++;
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> v = {-2,-2,-1,0,-4,3,1,2};
    int tar = 0;
    vector<vector<int>> x = threeSumOptimal(v, tar);
    for(int i = 0; i<x.size(); i++){
        for(int j = 0; j<x[0].size(); j++){
            cout << x[i][j] << " ";
        }
        cout<<endl;
    }
}