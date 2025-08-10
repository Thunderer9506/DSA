#include <iostream>
using namespace std;

void uniqueValue(int arr[], int sz){
    for (int i = 0; i < sz; ++i) {
        bool isUnique = true;
        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    uniqueValue(arr,sz);
    
    return 0;
}