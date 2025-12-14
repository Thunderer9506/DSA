#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter No. of rows: ";
    cin >> N;
    int temp = 1;
    for (int i = 0; i < N; i++){
        if (i % 2 == 0) temp = 0;
        else temp = 1;
        for (int j = 0; j < i+1; j++){
            if (temp == 0){
                cout << 1 << "";
                temp = 1;
            } else if(temp == 1){
                cout << 0 << "";
                temp = 0;
            }
        }
        
        cout << endl;
    }
    
    return 0;
}