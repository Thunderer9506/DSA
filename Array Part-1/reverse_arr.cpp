#include <iostream>
using namespace std;

void reverse(int arr[], int sz){
    int i = 0;
    int j = sz-1;
    while (i<j){
        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        // OR
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    reverse(arr,sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}