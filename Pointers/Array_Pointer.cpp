#include <iostream>
#include <vector>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    cout << &arr <<endl;
    cout << &arr[0] << endl;
    
    int a = 15;
    arr = &a;
    return 0;
}