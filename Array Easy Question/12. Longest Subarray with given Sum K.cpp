#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int longestSubarray = 0;
    int i = 0, j = 0;
    int temp = 0;
    while (j < nums.size()){
        cout << i << " " << j << " " << temp << " "<< longestSubarray << endl;
        temp += nums[j];
        if (temp == k){
            longestSubarray = max(longestSubarray,j-i+1);
            i = j;
            temp = 0;
            temp += nums[j];
        }
        j++;
    }

    cout << longestSubarray << endl;

    return 0;
}