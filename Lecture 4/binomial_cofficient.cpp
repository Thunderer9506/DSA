#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = 1; i < n+1; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n = 8,r = 2;
    int res = factorial(n)/(factorial(r) * factorial(n-r));
    cout << "Binomial Coefficient = " << res << endl;
    
    return 0;
}