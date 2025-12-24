#include <iostream>
#include <algorithm>

using namespace std;

void bubbleSort(int n, int arr[]){
    if(n == 1) return;
    int count = 0;
    for (int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            count++;
        }
    }
    if(count == 0) return;
    
    bubbleSort(n-1,arr);
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