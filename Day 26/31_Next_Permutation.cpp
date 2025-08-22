#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &A){
    int pivot = -1;
    int n = A.size();
    for (int i = n-1; i > 0; i++){
        if (A[i] < A[i+1]){
            pivot = i;
            break;
        }
    }

    if (pivot == -1){
        reverse(A.begin(),A.end());
        return;
    }

    for (int i = n-1; i > pivot ; i++){
        if(A[i] < A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }

    int i = pivot+1, j= n-1;
    while (i<=j){
        swap(A[i],A[j]);
        i++;
        j--;
    }
    
    
    
}


void printArray(vector<int> arr){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    vector<int> A = {1,2,3,0,0,0};

    nextPermutation(A);
    printArray(A);

    return 0;
}