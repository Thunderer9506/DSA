#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter No. of rows: ";
    cin >> N;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < i+1; j++){
            cout << i+1 << "";
        }
        cout << endl;
    }
    
    return 0;
}