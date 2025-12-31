// Leetcode Problem: 268

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {3,0,1};
    
    int n = nums.size();

    // Option 1
    // while (i<=n){
    //     auto item = find(nums.begin(), nums.end(),i);
    //     if (item == nums.end()) cout << "Not found" << " ";
    //     else cout << *item << " ";
    //     i++;
    // }

    // Option 2 (More Optimal)
    int correctSum = 0;
    for (int i = 1; i <= n; i++){
        correctSum += i;
    }

    int arrSum = 0;
    for (int i = 0; i < n; i++){
        arrSum += nums[i];
    }

    cout << correctSum - arrSum << endl;
    
    
    return 0;
}