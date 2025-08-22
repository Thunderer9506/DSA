#include <iostream>
#include <vector>
using namespace std;

void merge2SortedArray(vector<int> &A,vector<int> &B,int m, int n){
    int idx = m+n-1;
    int i = m-1;
    int j = n-1;
    while (i>=0&&j>=0){
        if (A[i] >= B[j]){ 
            A[idx] = A[i];
            idx--;
            i--;
        } else {
            A[idx] = B[j];
            idx--;
            j--;
        }
    }
    while (j >= 0)
    {
        A[idx] == B[j];
        idx--;
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
    vector<int> B = {2,5,6};
    int m = 3;
    int n = 3;

    merge2SortedArray(A,B,m,n);
    printArray(A);

    return 0;
}