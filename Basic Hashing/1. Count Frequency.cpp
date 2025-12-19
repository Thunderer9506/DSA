#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int Arr[] = {2,2,3,4,4,2};
    const int n = sizeof(Arr)/ sizeof(Arr[0]);

    // Optimal Approac
    unordered_map<int,int> freq;
    for (int i = 0; i < n; i++){
        if(freq.find(Arr[i]) != freq.end()){
            freq.find(Arr[i])->second += 1;
        }else {
            freq[Arr[i]] = 1;
        }
    }
    for(auto i: freq){
        cout << i.first << ":" << i.second << endl;
    }

    // Implementing Hashing Theory
    // int hash[n] = {0};
    // for (int i = 0; i < n; i++){
    //     hash[Arr[i]%n] += 1;
    // }
    // cout<< "Original Array" << endl;
    // for(int i :Arr) cout << i <<  " ";
    // cout << endl;
    // cout<< "Hashed Array" << endl;
    // for(int i :hash) cout << i <<  " ";
    // cout << endl;
    // cout<< "Frequency" << endl;
    // for (int i = 0; i < n; i++){
    //     cout << Arr[i] << ":" << hash[Arr[i]%n] << endl;
    // }
    


    return 0;
}