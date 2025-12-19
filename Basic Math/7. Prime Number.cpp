#include <iostream>

using namespace std;

int main(){
    int N;
    cout << "Enter a Number: ";
    cin >> N;
    bool isPrime = true;

    for (int i = 2; i < N; i++){
        if(N%i == 0) {
            cout << "Not a prime number";
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) cout << "It is a prime number";

    
    return 0;
}
