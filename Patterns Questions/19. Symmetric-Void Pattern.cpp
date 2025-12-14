#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter No. of rows: ";
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = N-i; j > 0; j--){
            cout << "*" << "";
        }
        for (int j = 0; j < i*2; j++){
            cout << " ";
        }
         for (int j = N-i; j > 0; j--){
            cout << "*" << "";
        }
        
        cout << endl;
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < i+1; j++){
            cout << "*" << "";
        }
        for (int j = 0; j < (N-i-1)*2; j++){
            cout << " ";
        }
         for (int j = 0; j < i+1; j++){
            cout << "*" << "";
        }
        
        cout << endl;
    }
    
    return 0;
}