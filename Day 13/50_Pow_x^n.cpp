#include <iostream>
using namespace std;

int dectoBinary(int decNum){
    int ans = 0,pow = 1;
    if (decNum < 0){
        decNum *= -1;
    }
    while (decNum > 0){
        int rem = decNum %2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}

double pow(double x, int n){
    long binForm = n;
    double ans = 1;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }
    while(binForm>0){
        if (binForm%2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main(){
    cout <<  << endl;
    
    return 0;
}