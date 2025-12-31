#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 3;

    int n = nums.size();
    for(int i=0;i<n;i++){
        if (nums[i] == target){
            cout << i << endl;
            break;
        }
    }
    
    
    return 0;
}