#include <iostream>
using namespace std;

void fibonacci(int n){
    int first = 1;
    int second = 0;
    cout << second << " ";
    cout << first << " ";
    for (int i = 3; i < n+1; i++){
        int temp = first + second;
        second = first;
        first = temp;
        cout << temp << " ";
    }
    
}

int main(){
    fibonacci(10);
    
    return 0;
}