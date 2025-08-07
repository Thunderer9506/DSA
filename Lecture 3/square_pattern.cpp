#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Number

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Star

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    
    // ASSCII value

    // for (int i = 1; i <= n; i++){
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Increase Number

    // int temp = 1;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << temp << " ";
    //         temp++;
    //     }
    //     cout << endl;
    // }

    // ASSCII value - 2

    char ch = 'A';
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}