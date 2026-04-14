#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>boards, int k, int n, int mid){
    int painter = 1, time = 0;
    for(int i = 0; i < n; i++){
        if(time + boards[i] <= mid){ // i had to recheck this 
            time += boards[i];
        }
        else{
            painter++;
            time = boards[i];
        }
    }
    if(painter > k) return false;
    else return true;
}

// Implement the painter_partition method here 
int painter_partition(vector<int>boards, int k){
    int n = boards.size();
    if(k > n) return -1;
    int maxVal = INT_MIN, sum = 0; // I had to rechek the max value thing whole
    for(int i = 0; i < n; i++){
        sum += boards[i];
        maxVal = max(maxVal, boards[i]);
    }
    
    int start = maxVal; // I had to recheck this
    int end = sum;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isPossible(boards, k, n, mid)){
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans; // I had to recheck this
}

int main() {
    // Write your code here
    int t;
    cin>>t;
    while(t--){
    int N, k;
    cin >> N >> k;
    vector<int> boards(N);
    for (int i = 0; i < N; i++)
        cin >> boards[i];

    cout << painter_partition(boards, k) << endl;
    }
    return 0;
}