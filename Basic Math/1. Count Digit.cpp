#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a Number: " << endl;
    cin >> N;

    int digit = 0;
    while (N > 0){
        digit += 1;
        N /= 10;
    }

    cout << digit;
    return 0;
}
