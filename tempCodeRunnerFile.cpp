#include<bits/stdc++.h>
using namespace std;

int search2dOnlyRowColSorted(vector<vector<int>> &mat, int tar){
    int n = mat.size();
    int m = mat[0].size();
    int topLeft = 0;
    int topRight = n-1;
    // while(topRight >=0 && ){
    //     if(mat[topLeft][topRight] == tar){
    //         return true;
    //     }
    //     else if(mat[topLeft][topRight] > tar){
    //         topRight--;
    //     } else {
    //         topLeft++;
    //     }
    // }
}

int main(){
    vector<vector<int>> mat = {
    {5, 2, 63},
    {4, 34, 6},
    {3, 34, 26}
};
    int target = 34;
    search2dOnlyRowColSorted(mat, target);
}