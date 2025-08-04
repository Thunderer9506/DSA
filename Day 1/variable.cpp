#include <iostream>
using namespace std;

int main(){
    int age = 25;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = false;
    double price = 100.99;

    cout << "Age:" << age <<endl;
    cout << "Size of age:" << sizeof(age) <<endl;
    cout << "Grade:" << grade <<endl;
    cout << "Value of PI:" << PI <<endl;
    cout << "isSafe:" << isSafe <<endl; // 0 --> false
    cout << "Price: " << price <<endl;
    return 0;
}