#include <iostream>
#include <vector>

using namespace std;

void showAllSubarrays(vector<int>& arr) {
    int n = arr.size();
    int maxSum = arr[0];
    // cout << "Subarray" << "\t\t" << "Sum" << endl;
    // cout << "--------------------------" << endl;

    // i is the Start Point
    for (int i = 0; i < n; i++) {
        int current_running_sum = 0;

        // j is the End Point
        for (int j = i; j < n; j++) {
            // Update the sum by adding the newest element
            current_running_sum += arr[j];

            if(current_running_sum > maxSum){
                maxSum = current_running_sum;
            }

            // To show the elements, we print everything from index i to j
            cout << "[";
            for (int k = i; k <= j; k++) {
                cout << arr[k] << (k == j ? "" : ", ");
            }
            cout << "]";
            cout << endl;


            cout<<"Sub array from index " << i << " to " << "index " << j << " has sum: "<< current_running_sum << endl;
            cout << endl;

            
            // Print the sum we've been tracking
            // cout << "Sum: " << current_running_sum << endl;
        }
    }
    cout << "highest sum = " << maxSum;
}

int main() {
    vector<int> my_array = {1,2,3,4,5};
    showAllSubarrays(my_array);
    return 0;
}