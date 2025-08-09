#include <iostream>
using namespace std;

int main(){
    unsigned int x = -10;
    cout << sizeof(long int) << endl; // increase the number of bytes stored >= 4byte
    cout << sizeof(short int) << endl; // decrease the number of bytes stored. ex, storing age dont take so much space
    cout << sizeof(long long int) << endl; // increase the number of bytes stored
    cout << sizeof(signed int) << endl; // accept +ve and -ve numbers both
    cout << x << endl; // only accept +ve numbers, if -ve given it will try to make it binary and then convert it back to number
    return 0;
}