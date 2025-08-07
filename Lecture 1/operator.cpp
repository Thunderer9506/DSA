#include <iostream>
using namespace std;

int main(){
    // int a = 5, b = 10;

    // Arthemetic
    // cout << "Sum: " << a + b << endl;
    // cout << "Difference: " << a - b << endl;
    // cout << "Multiply: " << a * b << endl;
    // cout << "Division: " << b / a << endl;
    // cout << "Modulo: " << b % a << endl;

    // Relational
    // cout << (3 == 5) << endl; // --> false
    // cout << (5 == 5) << endl; // --> true
    // cout << (3 < 5) << endl; // --> true
    // cout << (6 < 5) << endl; // --> false
    // cout << (3 <= 5) << endl; // --> true
    // cout << (5 >= 5) << endl; // --> true
    // cout << (3 > 5) << endl; // --> false
    // cout << (3 != 5) << endl; // --> true

    // Logical
    cout << !(3 != 5) << endl; // --> false
    cout << ((3 < 1) || (3 < 5)) << endl; // --> false
    cout << ((3 < 1) && (3 < 5)) << endl; // --> false
    return 0;
}