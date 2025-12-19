// Leet Code Problem Number: 7

#include <iostream>
using namespace std;

int main(){
    long long int N;
    cout << "Enter a Number: ";
    cin >> N;

    long long int isNegative = false;
    long long int revNum = 0;

    if (N<0){
        N = N *-1;
        isNegative = true;;
    }
    while (N > 0){
        long long int digit = N %10;
        revNum = revNum*10 + digit;
        N /= 10;
    }
    if (isNegative == true){
        revNum = revNum*-1;
    }

    cout << revNum;
    return 0;
}
