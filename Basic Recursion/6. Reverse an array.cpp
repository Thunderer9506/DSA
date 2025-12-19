#include <iostream>
using namespace std;

void swap(int &l,int &r){
    int temp = l;
    l = r;
    r = temp;
}

void reverse(int Arr[],int n,int l,int r){
    if (l>r) return;
    swap(Arr[l],Arr[r]);
    reverse(Arr,n,l+1,r-1);
}

int main(){

    int Arr[5] = {1,6,5,9,5};
    int n = sizeof(Arr)/ sizeof(Arr[0]);
    
    cout << "Before Reversing: " << endl;
    for(int i: Arr) cout << i << ",";
    cout << endl;
    reverse(Arr,n,0,n-1);
    cout << "After Reversing: " << endl;
    for(int i: Arr) cout << i << ",";
    return 0;
}