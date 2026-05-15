#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> vec = {3,2,3,4,1,3,2};
    sort(vec.begin(), vec.end());
    int tar = 5;

    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    int first = 0; 
    int last = vec.size()-1;
    cout << first << " " << last << endl;

    while(first < last){
        int sum = vec[first] + vec[last];
        if(sum == tar){
            cout << "found" << " as " << vec[first] <<"+"<< vec[last] << "=" << tar;
            return 0;
        }
        else if(sum > tar){
            last--;
        }
        else {
            first++;
        }
    }
    cout << "not found";
}