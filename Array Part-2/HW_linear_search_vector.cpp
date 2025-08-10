#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr = {2,6,5,4,5,8,9};
    int target = 4;
    for (int i = 0; i< arr.size(); i++){
        if (arr.at(i) == target){
            cout << "Value found at index: "<< i << endl;
            break;
        }
    }
    
    
    return 0;
}