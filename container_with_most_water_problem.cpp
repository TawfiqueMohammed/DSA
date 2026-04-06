#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[] = {1,8,6,2,5,4,8,3,7};

    int n = sizeof(A)/sizeof(A[0]);
    int maxWater = 0;

    for(int i=0; i<n; i++){
        for(int j = i+1; j < n; j++){
            int width = j - i;
            int height = min(A[i], A[j]);
            int currArea = width * height;
            maxWater = max(maxWater, currArea);
        }
    }
    cout << maxWater << endl;

}