#include <iostream>
using namespace std;

int sum(int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    cout << "Sum = " << sum(5) << endl;
    cout << "Sum = " << sum(10) << endl;
    
    return 0;
}