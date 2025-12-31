#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {7,4,2,9,6,9,4,6};

    int n = sizeof(arr) / sizeof(arr[0]);

    int firstMax, firstMin = 0;
    int secondMax, secondMin = n;

    int i = 0;
    while (i<n){
        if(arr[i] > arr[firstMax]){
            secondMax = firstMax;
            firstMax = i;
        } else if((arr[i] < arr[firstMax]) && (arr[i] > arr[secondMax])){
            secondMax = i;
        }
        if (arr[i] < arr[firstMin]){
            secondMin = firstMin;
            firstMin = i;
        } else if((arr[i] > arr[firstMin]) && (arr[i] < arr[secondMin])){
            secondMin = i;
        }
        i++;
    }

    cout << arr[firstMax] << endl;
    cout << arr[secondMax] << endl;
    cout << arr[firstMin] << endl;
    cout << arr[secondMin] << endl;
    
    return 0;
}