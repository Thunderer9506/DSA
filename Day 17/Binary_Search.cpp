#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr,int tar){
    int st = 0,end = arr.size()-1;
    while (st <= end){
        // why we used this st+(end-st)/2 instead of (st+end)/2
        // the worst case is what if value of st and end reaches
        // int capacity i.e INT_MAX then st+end will exceeds the
        // max capacity of int
        // here we do end-st which is a int and divide by 2 which is
        // also an int and now it wont give us error
        int mid = st+(end-st)/2;

        if (tar > arr[mid]){
            st = mid + 1;
        } else if (tar < arr[mid]){
            end = mid - 1;
        } else{
            return mid;
        }
    }
    return -1;
}

int binarySearchRecursion(vector<int> arr,int tar,int st,int end){
    int mid = st+(end-st)/2;

    if (tar > arr[mid]){
        return binarySearchRecursion(arr,tar,mid+1,end);
    } else if (tar < arr[mid]){
        return binarySearchRecursion(arr,tar,st,mid-1);
    } else{
        return mid;
    }
    
    return -1;
}


int main(){
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int tar1 = 12;

    cout << binarySearchRecursion(arr1,tar1,0,arr1.size()-1) << endl;
    
    vector<int> arr2 = {-1,0,3,5,9,12};
    int tar2 = 0;

    cout << binarySearch(arr2,tar2) << endl;
    return 0;
}