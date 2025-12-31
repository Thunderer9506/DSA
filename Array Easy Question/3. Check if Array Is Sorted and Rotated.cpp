// Leet code problem : 1752

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {3,4,5,1,2};

    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++){
        if(nums[i] > nums[(i+1)%n]) count++;
    }

    if(count <= 1) cout << "Array is sorted";
    else cout << "Array is not sorted";
    
    return 0;
}