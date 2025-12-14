#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cout << "Enter No. of rows: ";
    cin >> N;
    for (int i = 0; i < (2*N)-1; i++){
        for (int j = 0; j < (2*N)-1; j++){
            int top = i;
            int left = (2*N)-2 - i;
            int bottom = j;
            int right = (2*N)-2 - j;
            int minDistance = min(min(top,left),min(bottom,right));
            cout << N-minDistance << "";
        }
        cout << endl;
    }
    
    return 0;
}