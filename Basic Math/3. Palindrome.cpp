// Leet Code Problem Number: 9

#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter a Number: ";
    cin >> N;

    int halfRev = N;
    int palindrome = 0;
    while (halfRev > 0){
        int digit = halfRev %10;
        palindrome = palindrome*10 + digit;
        halfRev /= 10;
    }
    if (palindrome == N) cout << "Palindrome";
    else cout << "No Palindrome";
    return 0;
}
