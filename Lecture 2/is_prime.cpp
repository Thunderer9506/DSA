#include <iostream>
using namespace std;

int main (){
    int n;
    int isPrime = true;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 2; i < (int)n/2; i++){
        if (n%i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout << "Is a Prime Number" << endl;
    } else{
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}