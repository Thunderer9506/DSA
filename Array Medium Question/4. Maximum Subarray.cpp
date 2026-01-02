// Leetcode Problem: 53

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    int n = nums.size();
    int maxSum = nums[0],arrSum = 0;
    for (int i = 0; i < n; i++){
        arrSum += nums[i];
        maxSum = max(maxSum,arrSum);
        if (arrSum < 0){
            arrSum = 0;
        }
    }

    cout << maxSum << endl;
}