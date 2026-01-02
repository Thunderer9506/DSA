// Leetcode Problem: 121

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {7,1,5,3,6,4};

    int maxprofit = 0;
    int bestbuy = nums[0];
    for(int i=0; i< nums.size(); i++){
        maxprofit = max(maxprofit, nums[i]-bestbuy);
        bestbuy = min(bestbuy,nums[i]);
    }

    cout << maxprofit << endl;
}