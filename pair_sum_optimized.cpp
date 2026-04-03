#include<bits/stdc++.h>
using namespace std;

vector <int> pairSum(vector <int> v, int target, int size){
    int i = 0, j = size - 1;
    vector <int> ans;
    while(i<j){
        if((v[i] + v[j]) > target){
            j--;
        }

        else if((v[i]+v[j]) < target){
            i++;
        }

        else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector <int> v = {2,3,5,12,52};
    int size = v.size();
    int target = 64;

    vector <int> res = pairSum(v, target, size);

    cout << res[0] << " " << res[1];

}