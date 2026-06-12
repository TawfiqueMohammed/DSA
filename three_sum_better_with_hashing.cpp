#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {-1,0,1,2,-1,-4};
    int n = v.size();
    set<vector<int>> uniqueTriplets;
    for(int i = 0; i<n; i++){
        int target = -v[i];
        set<int> s;
        for(int j = i+1; j<n; j++){
            int c = target - v[j];
            if(s.find(c) != s.end()){
                vector<int> trip = {v[i], v[j], c};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(v[j]);
        }
    }

    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end()); // converting uniqueTriplets(which is set) into vector

    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
}