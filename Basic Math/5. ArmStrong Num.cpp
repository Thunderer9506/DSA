// Leet Code Question: 1134(Premium)

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    cout << "Enter a Number: ";
    cin >> N;
    
    int armstrong = 0;
    int temp = N;
    int digit = 0;

    // Digit Counter
    while (temp > 0){
        digit += 1;
        temp /= 10;
    }

    // Finding Armstrong
    temp = N;
    while (temp > 0){
        armstrong += pow(temp %10,digit);
        temp /= 10;
    }

    if (armstrong == N) cout << "Armstrong";
    else cout << "Not Armstrong";


    return 0;
}
