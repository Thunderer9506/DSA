// Leet Code Problem: 189

#include <iostream>
// #include <algorithm>
#include <vector>

using namespace std;

void reverse(vector<int>& nums,int left, int right){
    while(left < right){
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};

    int n = nums.size();
    int k = 3;
    k%=n; // Normalize the k if k>n

    // Option 1
    // for (int i = 0; i < k; i++){
    //     nums.insert(nums.begin(),nums[n-1]);
    //     nums.erase(nums.begin()+n);
    // }

    // Option 2
    // for (int i = 0; i < k; i++){
    //     int key = nums[i];
    //     for (int j =0; j < n; j++){
    //         int temp = nums[j];
    //         nums[j] = key;
    //         key = temp;
    //     }
    //     nums[0] = key;
    // }
    
    // Option 3 : More efficient
    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
    
    
    for(int i: nums){
        cout << i << " ";
    }
    
    
    return 0;
}