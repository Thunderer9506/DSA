#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int maxAlloweddTime){
    int painter = 1, time=0;
    for (int i = 0; i < n; i++){
        if(time + arr[i] <= maxAlloweddTime){
            time += arr[i];
        } else{
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int painterPartition(vector<int> arr,int n, int m){
    int sum = 0, maxVal = INT_MIN;
    for(int i: arr){
        sum += i;
        maxVal = max(maxVal, i);
    }
    int st = maxVal, end = sum, ans = -1;
    
    while (st <= end){
        int mid = st + (end-st)/2;
        if (isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        } else{
            st = mid + 1;
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4;
    int m = 2;

    cout << painterPartition(arr,n,m) << endl;

    return 0;
}