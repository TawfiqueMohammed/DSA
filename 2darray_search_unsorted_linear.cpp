#include<bits/stdc++.h>
using namespace std;

int linearSearch2dArray(vector<vector<int>> &mat, int tar){
    int m = mat.size();
    int n = mat[0].size();
    bool found = false;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(tar == mat[i][j]){
                cout << "element found in row: " << i+1 << " and" << " column: " << j+1 << endl;
                found = true;
            }
        }
    }
    cout << "element doesn't exist" << endl;
    return false;
}

int main(){
    vector<vector<int>> mat = {
    {5, 2, 63},
    {4, 34, 6},
    {3, 34, 26}
};
    // cout << mat.size() << endl;
    // cout << mat[0].size() << endl;
    int target = 34;
    linearSearch2dArray(mat, target);
}