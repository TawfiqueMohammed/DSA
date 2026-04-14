#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> A, int n, int m, int mid){
    int stu = 1, pages = 0;

    for(int i = 0; i < n; i++){
        if(A[i] > mid) return false;
        if(pages + A[i] <= mid){
            pages += A[i];
        }
        else{
            stu++;
            pages = A[i];
        }
    }
    
    if(stu > m) return false;
    if(stu <= m) return true;
}

int bookAllocation(vector<int> A, int n, int m){
    if(m > n) return -1;
    int sum = 0; 
    for(int i = 0; i < n; i++){
        sum += A[i];
    }
    int start = 0;
    int end = sum;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(isValid(A, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1; 
        }
    }
    return ans; 
}

int main(){
    vector<int> A = {12, 34, 67, 90};
    int n = A.size();
    int m = 2; // no of students

    cout << bookAllocation(A, n, m);

}