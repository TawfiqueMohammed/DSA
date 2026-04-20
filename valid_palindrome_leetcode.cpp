#include <bits/stdc++.h>
using namespace std;
bool alphaNum(char ch)
{
    if(ch >= '0' && ch <= '9' || tolower(ch) >= 'a' && tolower(ch) <= 'z'){
        return true;
    }
    return false;
}
bool validPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        if (!alphaNum(s[start]))
        {
            start++;
            continue;
        }
        if (!alphaNum(s[end]))
        {
            end--;
            continue;
        }

        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string s = "racecar";

    if (validPalindrome(s))
    {
        cout << "Palindrome" << endl;
    }

    else
    {
        cout << "Not Palindrome" << endl;
    }
}