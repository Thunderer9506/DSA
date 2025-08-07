#include <iostream>
using namespace std;

bool checkPrime(int n){
    for (int i = 2; i < (int)n/2; i++){
        if (n%i == 0){
            return false;
            break;
        }
    }
    return true;
}
void printPrime(int n){
    for (int i = 2; i < n; i++){
        if (checkPrime(i) == true){
            cout << i << " ";
        }
    }
    
}

int main(){
    int n = 17;
    printPrime(n);
    return 0;
}