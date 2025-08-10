#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& vec){
    int start = 0;
    int end  = vec.size()-1;
    while (start < end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> arr = {2,6,5,4,5,8,9};
    
    reverse(arr);
    for (int i: arr){
        cout << i << " ";
    }
    
    return 0;
}