#include <iostream>
#include <vector>
using namespace std;

int main(){
    int b = 11;
    int a;
    // if try to dereference the address of a variable which was never
    // initialized it will give random value depending upon what value
    // was stored at that address maybe another application used that 
    // particular address
    cout <<*(&a)<< endl; // a trick i found my slef
    int* ptr = &b;
    cout << *(&b) << endl;
    cout << &b << endl; 
    cout << *ptr << endl;

    cout << &ptr << endl;
    
    int** ptr2 = &ptr;
    cout << ptr2 << endl; // Gives address of ptr
    cout << *ptr2 << endl; // Gives address of a
    cout << **ptr2 << endl; // Gives value of a
    cout << &ptr2 << endl; // Gives address of ptr2
    return 0;
}