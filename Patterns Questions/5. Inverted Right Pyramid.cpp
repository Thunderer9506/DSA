#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter No. of rows: ";
    cin >> N;

    for (int i = N; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "*" << "";
        }
        cout << endl;
    }
    
    return 0;
}