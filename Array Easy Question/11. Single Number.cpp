// LeetCode Problem: 136

// Leetcode problem : 485

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {4,1,2,1,2};

    int temp = 0;
    for (int val: nums) temp = temp ^ val;

    cout << temp << endl;

    return 0;
}