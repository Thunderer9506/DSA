#include <iostream>
#include <vector>
using namespace std;

// Approach 1
// void sortColors(vector<int> &arr){ //
//     int n = arr.size();
    
//     int zero = 0;
//     int ones = 0;
//     int two = 0;
//     for (int i = 0; i < n; i++){
//         if (arr[i] == 0){
//             zero+= 1;
//         }else if (arr[i] == 1){
//             ones+= 1;
//         }else if (arr[i] == 2){
//             two+= 1;
//         }
//     }
//     for (int i = 0; i < zero; i++){
//         arr[i] = 0;
//     }
//     for (int i = zero; i < (zero+ones); i++){
//         arr[i] = 1;
//     }
//     for (int i = (zero+ones); i < n; i++){
//         arr[i] = 2;
//     }
// }


void printArray(vector<int> arr){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortColors(vector<int> &arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while (mid <= high){
        if (arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
        else mid++;
    }
}

int main(){
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};

    sortColors(arr);
    printArray(arr);

    return 0;
}