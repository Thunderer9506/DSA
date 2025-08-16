#include <iostream>
#include <vector>
using namespace std;

void passbyValue(int a){ // pass by value
    a = 20;
}

void passbyRef(int* a){ // pass by reference
    *a += 10;
}

int main(){
    int a = 10;
    cout << a << endl;

    // passbyValue(a);
    passbyRef(&a);
    passbyRef(&a);

    cout << a <<endl;
    return 0;
}