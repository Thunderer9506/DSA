#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
    vector<int> nums = {10, 5, 2, 7, 1, -10};
    int k = 15;
    int n = nums.size();
    map<int, int> preSumMap; // prefixSum -> earliest index
    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i]; // compute running prefix sum

        // Case 1: If the entire sum from 0 to i is equal to k
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // Case 2: If (sum - k) is seen before, a valid subarray exists
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Only store the first occurrence of each prefix sum
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    cout << maxLen << endl;

    return 0;
}