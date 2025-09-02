#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {3,5,6,7,3,8,6};

    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    for (auto it = vec.rbegin(); it != vec.rend(); it++){
        cout << *(it) << " ";
    }
    
}