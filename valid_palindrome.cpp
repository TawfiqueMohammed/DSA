#include<bits/stdc++.h>
using namespace std;

bool validPalindrome(char ch[], int n){
    int i = 0, j = n-1;
    while(i < j){
        if(ch[i] != ch[j]){
            return false;
        }
        i++, j--;
    }
    return true;
}

int main(){
    char ch[] = "racecar";
    int n = sizeof(ch) - 1;
    if(validPalindrome(ch, n)) cout << "palindrome" << endl;
    else cout << "not palindrome" << endl;
}