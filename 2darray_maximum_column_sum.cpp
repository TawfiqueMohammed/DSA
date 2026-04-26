#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4, column = 3;
    int maxColSum = INT_MIN;
    for(int i = 0; i < column; i++){
        int colSum = 0;
        for(int j = 0; j < row; j++){
            colSum += mat[j][i];
        }
        cout << colSum << " ";
        maxColSum = max(colSum, maxColSum);
    }
    cout << endl;
    cout << maxColSum;
}