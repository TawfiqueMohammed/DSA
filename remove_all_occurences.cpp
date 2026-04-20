#include<bits/stdc++.h>
using namespace std;

string removeOccur(string &s, string part){
    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string s = "ababaa";
    int n = s.length();
    // cout << n << endl;
    string part = "aba";
    cout << removeOccur(s, part) << endl;
    // removeOccur(s, part);

    // for(int i = 0; i < part.length(); i++){
    //     cout << s[i] ;
    // }
}