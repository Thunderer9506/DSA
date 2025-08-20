#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){ // O(n^2)
    for (int i = 0; i < n-1; i++){
        int min = i;
        for (int j = i+1; j < n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[] = {4,1,5,2,3};
    int n = 5;

    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}