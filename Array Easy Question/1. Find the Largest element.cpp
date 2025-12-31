#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {8, 10, 5, 7, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int max =0;
    for (int i = 0; i < n; i++){
        if (arr[i] > max) max = arr[i];
    }
    
    cout << max;
    
    return 0;
}