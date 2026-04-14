#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> pos, int n, int mid, int k){
    int cows = 1, lastPos = pos[0];
    for(int i = 1; i < n; i++){ // past mistake: here I initialized i as 0 but it should be 1
        if(mid <= pos[i] - lastPos){
            cows++;
            lastPos = pos[i];
            if(cows == k) return true;

        }
    }
    return false;
}

int aggressiveCows(vector<int> pos, int n, int k){
    sort(pos.begin(), pos.end());


    int start = 0, end = pos[n-1] - pos[0]; // past mistake: i initialized start as pos[0] which is wrong logic

    // cout << start << " " << end << endl;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        
        if(isPossible(pos, n, mid, k)){
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}


int main(){
    vector<int> pos = {7,13,11};
    int n = pos.size();
    int k = 3;

    cout << aggressiveCows(pos, n, k);

}