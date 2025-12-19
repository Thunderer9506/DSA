#include <iostream>

using namespace std;

void printNumber(int n,int i){
    cout << i << endl;
    if (n == i) return;
    return printNumber(n,i+1);
}
// more cleaner version
// void printNumber(int n) {
//     if (n == 0) return;
//     printNumber(n - 1);
//     cout << n << endl;
// }


int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    printNumber(n,1);

    return 0;
}