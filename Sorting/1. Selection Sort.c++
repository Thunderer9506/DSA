#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int n, int arr[]){
    int min_index = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if(arr[j] < arr[min_index]) min_index = j;
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main(){
    int arr[] = {13,46,24,52,20,9};

    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(n,arr);
    for(int i: arr){
        cout << i << " ";
    }
    
    return 0;
}