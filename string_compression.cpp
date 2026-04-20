#include<bits/stdc++.h>
using namespace std;

int stringCompression(vector<char> &chars){
    int n = chars.size();
    int idx = 0;
    int i;
    for(i = 0; i < n; i++){
        char ch = chars[i];
        int count = 0;
        while(i < n && chars[i] == ch){
            count++, i++;
        }
        if(count == 1) {
            chars[idx++] = ch;
        }
        else {
            chars[idx++] = ch;
            string str = to_string(count);
            for(int digit = 0; digit < str.length(); digit++){
                chars[idx++] = str[digit];
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    for(int i = 0; i < stringCompression(chars); i++){
        cout << chars[i] << " ";
    }
}