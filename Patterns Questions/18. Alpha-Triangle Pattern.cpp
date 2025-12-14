#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter No. of rows: ";
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = N-i-1; j < N; j++){
            cout << (char)(j+65) << "";
        }
        
        cout << endl;
    }
    
    return 0;
}