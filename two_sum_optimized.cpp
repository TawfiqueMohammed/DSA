#include <bits/stdc++.h>
using namespace std;

vector<int> twoSumOptimized(vector<int> v, int tar)
{
    unordered_map<int, int> um;

    for (int i = 0; i < v.size(); i++)
    {
        int first = v[i];
        int second = tar - first;
        if (um.find(second) != um.end())
        {
            return {first, second};
        }
        um[first] = i;
    }
    return {-1,-1};
}

int main()
{
    vector<int> v = {3, 1, 5, 4, 15, 12};
    int target = 27;
    vector<int> ans = twoSumOptimized(v, target);
    cout << ans[0] <<" " << ans[1] << endl;
}