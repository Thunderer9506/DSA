#include <iostream>

using namespace std;

int main(){
    int N;
    cout << "Enter a Number: ";
    cin >> N;

    for (int i = 1; i < N+1; i++){
        if(N%i == 0) cout << i << ",";
    }
    
    return 0;
}
