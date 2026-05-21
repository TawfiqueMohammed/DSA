#include<bits/stdc++.h>
using namespace std;

vector<int> findRepeatingAndMissing(vector<vector<int>> & grid, int n){
    vector<int> v;
    unordered_set<int> us;
    int a, b;
    int actualSum = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            actualSum += grid[i][j];
            if(us.find(grid[i][j]) != us.end()){
                a = grid[i][j];
                v.push_back(a); 
            }
            us.insert(grid[i][j]);
        }
    }
    int expectedSum = (n*n * (n*n + 1)) / 2;
    b = expectedSum - actualSum + a;
    v.push_back(b);
    return v;
}

int main(){
    vector<vector<int>> grid = {{1,2,3},{4,5,6},{6,8,9}};
    int n = grid.size();
    // cout << n;

    vector<int> a = findRepeatingAndMissing(grid, n);
    cout << "Repeating: " << a[0] << " and " << "Missing: " << a[1];
}