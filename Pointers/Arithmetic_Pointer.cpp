#include <iostream>
#include <vector>
using namespace std;


int main(){
    
    int a = 15;
    int *ptr = &a;

    // increment/decrement
    // cout << ptr << endl;
    // ptr++;
    // cout << ptr << endl;

    // add/subtract
    // cout << ptr << endl;
    // ptr += 2;
    // cout << ptr << endl;

    // operation in array
    // int arr[] = {1,2,3,4,5};
    // cout << *(arr) << endl;
    // cout << *(arr+1) << endl;
    // cout << *(arr+2) << endl;
    // cout << *(arr+3) << endl;
    // cout << *(arr+4) << endl;

    // Pointer to Pointer
    // int *ptr2; // 10
    // int *ptr1 = ptr2 + 2; // 108

    // cout << ptr1-ptr2 << endl; // 2

    // Comparison bw pointer
    int* ptr1;
    int* ptr2 = ptr1;

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << (ptr != ptr2) << endl;
    return 0;
}