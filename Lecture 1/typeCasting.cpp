#include <iostream>
using namespace std;

int main(){
    char grade = 'A'; // ascii: 65
    double price = 100.99;

    int value = grade;
    int newPrice = (int)price;

    cout << value << endl;
    cout << newPrice << endl; // remove all the number after decimal
    return 0;
}