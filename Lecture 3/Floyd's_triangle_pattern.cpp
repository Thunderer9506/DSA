#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Number

    // int temp = 1;
    // for (int i = 0; i < n; i++){
    //     for (int j = i+1; j > 0 ; j--){
    //         cout << temp << " ";
    //         temp++;
    //     }
    //     cout << endl;
    // }
    
    // Character
    char temp = 'A';
    for (int i = 0; i < n; i++){
        for (int j = i+1; j > 0 ; j--){
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
    return 0;
}