#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int n, int arr[]){
    for (int i = 1; i < n; i++){
        if (arr[i] < arr[i-1]){
            int key = arr[i];
            for (int j = 0; j < i-1; j++){
                if (arr[j] > key){
                    int temp = arr[j];
                    arr[j] = key;
                    key = temp;
                }
            }
            arr[i] = key;
        }
    }
} 

int main(){
    int arr[] = {13,46,24,52,20,9};

    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(n,arr);
    for(int i: arr){
        cout << i << " ";
    }
    
    return 0;
}