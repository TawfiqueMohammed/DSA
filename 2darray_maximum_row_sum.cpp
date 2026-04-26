#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4, column = 3;
    int ans = 0;
    int maxRowSum = INT_MIN;
    for(int i = 0; i < row; i++){
        int rowSumI = 0;  // when j loop is finished the rowSumI becomes always 0; that's how we calculate only row numbers
        for(int j = 0; j < column; j++){
            // cout << mat[i][j] << " ";
            rowSumI += mat[i][j]; // only getting the sums of the numbers through the row
        }
        // cout << endl;
        cout << rowSumI << " ";
        maxRowSum = max(rowSumI, maxRowSum); 
    } 
    cout << endl;
    cout << maxRowSum;
}