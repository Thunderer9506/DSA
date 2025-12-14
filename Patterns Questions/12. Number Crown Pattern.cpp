#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter No. of rows: ";
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < i+1; j++){
            cout << j+1 << "";
        }
        for (int j = 0; j < (N-i-1)*2; j++){
            cout << " " << "";
        }
        for (int j = i+1; j > 0; j--){
            cout << j << "";
        }

        cout << endl;
    }
    
    return 0;
}