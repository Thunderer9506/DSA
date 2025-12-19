// Leetcode Problem number: 509

#include <iostream>
using namespace std;

// void fibonacci(int n,int first, int second){
//     if (n==0) return;
//     int temp = first + second;
//     cout << temp << " ";
//     first = second;
//     second = temp;
//     fibonacci(n-1,first,second);
// }

int fib(int n){
    if (n==0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cout << "Enter N: ";    
    cin >> n;

    // cout << 0 << " " << 1 << " ";
    // fibonacci(n,0,1);
    cout << fib(n);
    return 0;
}