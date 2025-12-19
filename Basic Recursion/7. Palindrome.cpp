// Leet Code Problem number: 125

#include <iostream>
using namespace std;

void swap(int &l,int &r){
    int temp = l;
    l = r;
    r = temp;
}

void reverse(string &a,int n,int l,int r){
    if (l>r) return;
    swap(a[l],a[r]);
    reverse(a,n,l+1,r-1);
}

int main(){

    string a;
    cout << "Enter a string: ";
    cin >> a;
    string b = a;
    int n = a.length();
    reverse(b,n,0,n-1);
    if(b==a) cout << "Palindrome";
    else cout << "Not Palindrome";

    return 0;
}