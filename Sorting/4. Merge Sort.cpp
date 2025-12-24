#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



vector<int> merge(vector<int>& left,vector<int>& right){
    vector<int> result;
    int leftSize = left.size();
    int rightSize = right.size();
    int leftPointer = 0;
    int rightPointer = 0;

    while((leftPointer < leftSize) && (rightPointer < rightSize)){
        if (left[leftPointer] <= right[rightPointer]){
            result.push_back(left[leftPointer]);
            leftPointer++;
        } else{
            result.push_back(right[rightPointer]);
            rightPointer++;
        }
    }
    while (leftPointer < leftSize){
        result.push_back(left[leftPointer]);
        leftPointer++;
    }
    while (rightPointer < rightSize){
        result.push_back(right[rightPointer]);
        rightPointer++;
    }
    return result;
}


vector<int> divide(vector<int>& arr,int start, int end){
    
    if ((end-start) == 1){
        return {arr[start]};
    };
    int mid = start + (end-start)/2;
    vector<int> leftSort = divide(arr,start,mid);
    vector<int> rightSort = divide(arr,mid,end);

    return merge(leftSort,rightSort);
}


int main(){
    vector<int> arr = {3,2,8,5,1,4,23};

    int n = arr.size();

    vector<int> sortedArray = divide(arr,0,n);
    for(int i:sortedArray){
        cout << i << " ";
    }
    
    return 0;
}