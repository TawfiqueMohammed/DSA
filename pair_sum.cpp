#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {23,7,2,15};
    int target = 9;
    int size = v.size();

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){

            // showing the indices of the pair which fulfill the target
            if(v[i]+v[j] == target){
                cout << i <<"," << j <<endl;
            }

            // showing all pairs
            cout << v[i] << v[j] << " ";
        }
        cout << endl;

    }

}