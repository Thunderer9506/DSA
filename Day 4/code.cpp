#include <iostream>
using namespace std;


// function definition
int printHello(){
    cout << "Hello\n";
    return 3;
}

// sum of 2 numbers
int sum(int a, int b){
    int s = a+b;
    return s;
}

int minOfTwo(int a, int b){
    if(a < b){
        return a;
    } else{
        return b;
    }
}

int main(){
    // function call / invoke
    // int val = printHello();
    // cout << "Val = " << val;
    // OR
    // cout << printHello() << endl;

    // cout << sum(5,6) << endl;

    cout << "Min = " << minOfTwo(5,3) << endl;
    return 0;
}