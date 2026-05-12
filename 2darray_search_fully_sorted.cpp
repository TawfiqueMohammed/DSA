#include <bits/stdc++.h>
using namespace std;

bool midRowSearching(vector<vector<int>> &mat, int target, int midRow)
{

    int start = 0;
    int n = mat[0].size();
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (mat[midRow][mid] == target)
        {
            return true;
        }
        else if (mat[midRow][mid] < target)
        {
            start = mid + 1;
        }
        else if (mat[midRow][mid] > target)
        {
            end = mid - 1;
        }
    }
    return false;
}

int searchFullySorted2dMatrix(vector<vector<int>> &mat, int m, int n, int target)
{
    int startRow = 0, endRow = m - 1;
    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;

        if (mat[midRow][0] <= target && mat[midRow][n - 1] >= target)
        {
            return midRowSearching(mat, target, midRow);
        }
        else if (mat[midRow][0] > target)
        {
            endRow = midRow - 1;
        }
        else if (mat[midRow][n - 1] < target)
        {
            startRow = midRow + 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {
        {10, 20, 30, 40},
        {50, 54, 56, 60},
        {61, 67, 76, 88},
        {90, 92, 98, 100}};

    int m = mat.size();
    int n = mat[0].size();

    int target = 67;

    // cout << n;
    bool ans = searchFullySorted2dMatrix(mat, m, n, target);
    cout << ans;
}