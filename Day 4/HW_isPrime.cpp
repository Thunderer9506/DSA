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

int main(){
    int n = 17;
    if (checkPrime(n) == true){
        cout << "Is a Prime Number" << endl;
    } else{
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}