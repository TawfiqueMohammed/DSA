#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> mat, int m, int n){
    vector<int> ans;
    int srow = 0, erow = m-1, scol = 0, ecol = n-1;
    while(srow<=erow && scol<=ecol){
        // top
        for(int j = scol; j <= ecol; j++){
            ans.push_back(mat[srow][j]);
        }
        // right
        for(int i = srow+1; i <= erow; i++){
            ans.push_back(mat[i][ecol]);
        }
        // bottom
        for(int j = ecol-1; j >= scol; j--){
            if(srow == erow){
                break;
            }
            ans.push_back(mat[erow][j]);
        }
        // left
        for(int i = erow-1; i >= srow+1; i--){
            if(scol == ecol){
                break;
            }
            ans.push_back(mat[i][scol]);
        }
        srow++, scol++, ecol--, erow--;
    }
    return ans;
}

int main()
{
    vector<vector<int>> mat = {
        {25, 11, 45, 34},
        {5, 23, 4, 43},
        {22, 31, 54, 6},
        {56, 13, 64, 33},
        {56, 13, 64, 33}
    };
    int m = mat.size();
    int n = mat[0].size();
    vector<int> ans = spiralMatrix(mat, m, n);
    for(int i = 0; i < (m*n); i++){
        cout << ans[i] << " ";
    }
}