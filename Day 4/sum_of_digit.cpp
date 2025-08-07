#include <iostream>
using namespace std;

int sumOfDigit(int n){
    int sum = 0;
    while (n > 0){
        sum += n%10;
        n = n/10;
    }
    return sum;
}

int main(){
    // sumOfDigit(143);
    cout << "Sum of Digit: "<< sumOfDigit(143) << endl;
    
    return 0;
}