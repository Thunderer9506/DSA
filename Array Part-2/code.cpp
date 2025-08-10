#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> vec; // default 0
    // vector<int> vec = {1,2,3};
    vector<char> vec = {'a','b','c','d','e'};

    for (char i: vec){ // foreach loop
        cout << i << endl;
    }
    
    return 0;
}