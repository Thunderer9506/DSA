#include <iostream>
using namespace std;

int main(){
    int arr[] = {5,15,22,1,-15,24};
    int maxNum = arr[0];
    int minNum = arr[0];
    int n = sizeof(arr)/ sizeof(arr[0]);

    for (int i = 0; i < n; i++){
        maxNum = max(maxNum,arr[i]);
        minNum = min(minNum, arr[i]);
    }

    cout << "Max and Min: " << maxNum << " " << minNum <<endl;
    return 0;
}