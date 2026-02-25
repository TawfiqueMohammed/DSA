#include<bits/stdc++.h>
using namespace std;

int increment1(int *x){ // pass by pointer
    *x = *x + 1;
    return *x;
}

int increment2(int &x){ // pass by reference
    x = x + 1; // The compiler automatically dereferences the variable for us. 
                // We don't see the * symbol like increment1 function because C++ was designed to make the code look cleaner. 
                //We can think of it like a hidden smart pointer
    return x;
}

int increment3(int x){ // pass by value
    x = x + 1; 
    return x;
}

int main(){
    int a=5;

    int b=5;
    int c=5;
    

    cout<< a <<" "<<endl;
    cout<<endl;

    cout<< increment1(&a) << endl; // 6
    cout<< a <<" "<<endl; // 6
    cout<<endl;

    cout<< increment2(b) << endl; // 6
    cout<< b <<" "<<endl; // 6 
    cout<<endl;

    cout<< increment3(c) << endl; // 6
    cout<< c <<" "<<endl; // 5
    
    
}