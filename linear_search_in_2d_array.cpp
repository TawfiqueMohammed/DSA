#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4, column = 3;
    int key = 4;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(mat[i][j] == key){
                cout << "found at row: " << i+1 << " and column: " << j+1 << endl;
            }
        }
    }
}