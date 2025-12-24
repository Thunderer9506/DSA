#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sort(vector<int>& arr, int pivot,int start){
    int j = start;
    int i = j-1;
    while (j < pivot){
        if (arr[j] < arr[pivot]){
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        } else{
            j++;
        }
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[pivot];
    arr[pivot] = temp;
    return i;
}



void quickSort(vector<int>& arr,int start,int end){
    if(start > end){
        return;
    }
    int pivot = sort(arr, end,start);
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
}


int main(){
    vector<int> arr = {3,2,8,5,1,4,23};

    int n = arr.size();

    quickSort(arr,0,n-1);
    for(int i:arr){
        cout << i << " ";
    }
    
    return 0;
}