#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int first;
    int second;
    cout << "Enter 1st Number: ";
    cin >> first;
    cout << "Enter 2nd Number: ";
    cin >> second;

    // Best Approach
    // int gcd = 1;
    // for (int i = 1; i < min(first,second)+1; i++){
    //     if((first%i == 0) && (second%i == 0)){
    //         if (i > gcd) gcd = i;
    //     }
    // }
    // cout << gcd;
    
    // Optimal Approach (Euclidean Approach)
    while (min(first,second) == 0){
        if(first > second) first = first - second;
        else second = second - first;
    }
    if (first == 0) cout << second;
    else cout << first;
    
    return 0;
}
