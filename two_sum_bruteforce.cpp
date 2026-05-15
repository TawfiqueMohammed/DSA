#include <bits/stdc++.h>
using namespace std;
// two sum bruteforce
int main()
{
    vector<int> vec = {3, 2, 1, 4, 5};
    int n = vec.size();
    int target = 7;
    for (int i = 0; i < vec.size(); i++)
    {
        int first = vec[i];
        for (int j = i + 1; j < vec.size(); j++)
        {
            int second = vec[j];
            if (first + second == target)
            {
                cout << "found: " << first << "+" << second << "=" << target << endl;
                return 0;
            }
        }
    }

    cout << "not found";

    // bool found = false; // flag

    // for (int i = 0; i < n && !found; i++)
    // {
    //     int first = vec[i];
    //     // ✅ outer loop checks flag
    //     for (int j = i + 1; j < n && !found; j++)
    //     { // ✅ inner loop checks flag
    //         int second = vec[j];

    //         if (first + second == target)
    //         {
    //             cout << "found!";
    //             found = true; // ✅ both loops stop
    //         }
    //     }
    // }
    // if(!found){
    //     cout << "not found";
    // }
}