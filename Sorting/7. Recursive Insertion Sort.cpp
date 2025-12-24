#include <iostream>
#include <algorithm>

using namespace std;

void insertionSort(int n, int arr[], int key){
    if (key == n) return;
    if (arr[key] < arr[key-1]){
        for (int j = 0; j < key-1; j++){
            if (arr[j] > arr[key]){
                int temp = arr[j];
                arr[j] = arr[key];
                arr[key] = temp;
            }
        }
    }
    
    insertionSort(n,arr,key+1);
} 

int main(){
    int arr[] = {13,46,24,52,20,9};

    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(n,arr,1);
    for(int i: arr){
        cout << i << " ";
    }
    
    return 0;
}