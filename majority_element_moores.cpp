#include<bits/stdc++.h>
using namespace std;

int moores_voting(vector <int> v, int size){
    int freq = 0, ans = 0;
    for(int i = 0; i < size; i++){
        if(freq == 0){
            ans = v[i];
        }

        if(ans == v[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    int count = 0;
    for(int i = 0; i < size; i++){
        if(ans == v[i]){
            count++;
        }
    }

    if(count > (size/2)){
        return ans;
    }
    else{
        return -1;
    }

}

int main(){
    vector <int> v = {3,3,3,2,1,1,3};
    int n = v.size();
    cout << moores_voting(v, n);
}