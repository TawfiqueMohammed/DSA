#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {1, -2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;
        for (int end = start; end < n; end++)
        {
            currentSum += A[end];
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }
            
            cout<<"Sub array from index " << start << " to " << "index " << end << " has sum: "<< currentSum << endl;

        }
    }

    cout << "So the Maximum Sum of the sub array is: " << maxSum << endl;
}
