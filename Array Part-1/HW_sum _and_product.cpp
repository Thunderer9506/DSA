#include <iostream>
using namespace std;

void sumProduct(int arr[], int sz){
    int sum = 0;
    int product = 1;
    for (int i = 0; i < sz; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum of array: " << sum << endl;
    cout << "Product of array: " << product << endl;
    
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    sumProduct(arr,sz);
    
    return 0;
}