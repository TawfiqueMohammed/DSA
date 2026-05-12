#include<bits/stdc++.h>
using namespace std;

bool search2dOnlyRowColSorted(vector<vector<int>> &mat, int tar){
    if(mat.empty()) return false;

    int rows = mat.size();
    int cols = mat[0].size();

    // Top-Right কোণা থেকে শুরু (row 0, last column)
    int r = 0; 
    int c = cols - 1;

    while(r < rows && c >= 0){ // বাউন্ডারি চেক
        if(mat[r][c] == tar){
            cout << "Found at row: " << r << ", col: " << c << endl;
            return true;
        }
        else if(mat[r][c] > tar){
            c--; // ভ্যালু বড় হলে বামে যাই (কলাম কমাই)
        } else {
            r++; // ভ্যালু ছোট হলে নিচে যাই (রো বাড়াই)
        }
    }
    return false;
}

int main(){
    // Row-Column সর্টেড ম্যাট্রিক্স
    vector<vector<int>> mat = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    
    int target = 29;
    if(!search2dOnlyRowColSorted(mat, target)){
        cout << "Not found" << endl;
    }

    return 0;
}