// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int arr[100],n,i;
//     cin>>n;
//     for(i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int a;
//     cin>>a;

//     bool found = false;
//     for(i=0; i<n; i++){
//         if(a==arr[i]){
//             cout<< i << endl;
//             found = true;
//             break;
//         }
//     }

//     if(!found){
//         cout<< -1<< endl;
//     }

// }


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        int search(vector<int>& arr, int x){
            for(int i=0; i<arr.size(); i++){
                if(x==arr[i]) return i;
            }
            return -1;
        }
};

int main(){
    Solution sol;
    vector<int> arr={1,2,3,4,5};
    int target=2;
    int result=sol.search(arr, target);
    if(result!=-1) cout<<"FOUND at "<<"index no: "<<result<<endl;
    else cout<<"NOT FOUND";
}