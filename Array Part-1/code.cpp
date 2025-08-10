#include <iostream>
using namespace std;

int main(){
    // sytax datatype variable[size of array] = {value};
    // index start from 0 to n-1 where n is length of array
    int marks[5] = {99,10,54,45,63};
    // double mark[5] = {99.42,10.42,54.42,45.42,63.54};

    // Assignng a value to an index
    // marks[0] = 10;

    // Accessing each value
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;

    // Accessing using loops;
    // int size = sizeof(marks)/ sizeof(marks[0]);
    // cout << size;
    // for (int i = 0; i < size; i++){
    //     cout << marks[i] << endl;
    // }
    
    int arr[5];
    for (int i = 0; i < 5; i++){
        cout << "Enter a value for index" << i << ": ";
        cin >> arr[i];
    }
    int size = sizeof(arr)/ sizeof(arr[0]);
    
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
    return 0;
}