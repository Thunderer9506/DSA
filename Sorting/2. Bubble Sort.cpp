#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int n, int arr[]){
    for (int i = 0; i < n; i++){
        bool isSwap = false;
        for (int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                isSwap = true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(isSwap == false) break;
    }
}

int main(){
    int arr[] = {13,46,24,52,20,9};

    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(n,arr);
    for(int i: arr){
        cout << i << " ";
    }
    
    return 0;
}