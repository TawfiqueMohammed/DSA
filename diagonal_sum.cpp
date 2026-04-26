#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[4][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int row = 3, column = 3, diagSum = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(i == j){
                diagSum += mat[i][j];
            }
            else if(j == row-i-1){
                diagSum += mat[i][j];
            }
        }
    }
    cout << diagSum;
}