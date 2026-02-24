#include<bits/stdc++.h>
using namespace std;

void increment(int *a){
    *a = *a + 1;
}
    int second_increment(int x){
        x = x + 1;
        return x;
    }

    int main(){
        int a = 23;
        int x = 125;
        increment(&a);
        cout<< a <<endl;

        /* here when second_increment function is called we save it into a new variable y. 
        That's how value is changed but x remains the same as we aren't passing the variable by reference */
        int y = second_increment(x);
        cout << y << endl;
    }