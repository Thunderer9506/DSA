// Leet code problem : 26

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,1,2,2,2,3,3};

    int n = nums.size();
    int temp = n;
    
    int i = 0;
    while(i < temp-1){
        if(nums[i] == nums[i+1]){
            nums.erase(nums.begin() + i);
            temp--;
        } else{
            i++;
        }
    }

    
    for(int i: nums){
        cout << i << endl;
    }
    
    
    return 0;
}