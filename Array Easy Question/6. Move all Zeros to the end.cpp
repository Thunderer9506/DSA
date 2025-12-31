// Leet Code Problem: 283

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1};

    int n = nums.size();
    int i = -1;
    int j = 0;
    while (j < n){
        if (nums[j] != 0){
            i++;
            int temp = nums[j];
            nums[j] = nums[i];
            nums[i] = temp;
        }
        j++;
    }
    
    
    for(int i: nums){
        cout << i << " ";
    }
    
    
    return 0;
}