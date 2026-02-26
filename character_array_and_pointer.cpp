#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[]={'j', 'o', 'h', 'n'};
    char c[] = "Albert";
    int b = 5;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    for(int i = 0; i < sizeof(a); i++){
        cout<<a[i]<<"";
    }

    cout<<" ";

    for(int i = 0; i < sizeof(c); i++){
        cout<<c[i]<<"";
    }
    
    cout<<sizeof(int*);

}