#include <iostream>
using namespace std;

int main(){
    int num = 32;
    // for (int i = 0; i < num/2; i++){
    //     if (2^i == num){
    //         cout << " Yes " << endl;
    //         break;
    //     }
    // }
    // a << b = a*2^b
    // a >> b = a/2^b
    if ((num&(num-1)) == 0){
        cout << "Yes" << endl;
    } else{
        cout << "No"<< endl;
    }
}