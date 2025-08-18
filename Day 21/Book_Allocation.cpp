#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr,int n,int m, int maxAllowedPages){
    int stud = 1, pages = 0;
    for(int i: arr){
        if (i > maxAllowedPages) return false;
        if (pages + i <= maxAllowedPages){
            pages += i;
        } else {
            stud++;
            pages = i;
        }
    }
    return stud > m ? false : true;
}

int allocateBooks(vector<int> arr,int n, int m){
    if (m>n){
        return -1;
    }
    int sum = 0;
    for(int i: arr){
        sum += i;
    }
    int st = 0, end = sum;
    int ans = -1;
    while (st <= end){
        int mid = st + (end-st)/2;
        if (isValid(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,1,3,4};
    int n = 4, m = 2;
    cout << allocateBooks(arr,n,m) << endl;
    return 0;
}