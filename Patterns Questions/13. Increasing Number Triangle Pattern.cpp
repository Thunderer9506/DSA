#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter No. of rows: ";
    cin >> N;
    int temp = 1;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < i+1; j++){
            cout << temp << " " << "";
            temp += 1;
        }
        cout << endl;
    }
    
    return 0;
}