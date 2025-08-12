#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Brute Force
    vector<int> nums = {3,2,3};
    int n = nums.size();
    // int target = n/2;
    // for(int val: nums){
    //     int freq = 0;
    //     for(int ele: nums){
    //         if(ele == val){
    //             freq++;
    //         }
    //     }
    //     if (freq > target){
    //         cout << val <<endl;
    //         break;
    //     }
    // }

    // Sort Approach
    // sort(nums.begin(),nums.end());

    // int freq = 1, ans = nums[0];
    // for(int i= 1; i<n; i++){
    //     if(nums[i] == nums[i-1]){
    //         freq++;
    //     } else{
    //         freq = 1;
    //         ans = nums[i];
    //     }
    //     if(freq > n/2){
    //         return ans;
    //     }
    // }
    // return ans;

    // Moore's Algorithm
    
    
    return 0;
}