#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {3,5,6,7,3,8,6};

    vec.erase(vec.begin() +1);
    for(int i: vec){
        cout << i << " ";
    }
}