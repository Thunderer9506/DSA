#include <iostream>

using namespace std;

void printName(int n){
    if (n == 0) return;
    cout << "Shaurya Srivastava" << endl;
    n-=1;
    return printName(n);
}

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    printName(n);

    return 0;
}