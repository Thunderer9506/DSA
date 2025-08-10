#include <iostream>
using namespace std;

int main(){
    int arr[5] = {4,-1,2,-1,2};
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        temp = temp ^ arr[i];
    }
    cout << temp;
    
    return 0;
}