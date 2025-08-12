#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach
// vector<int> pairSum(vector<int> nums, int target){
//     vector<int> ans;
//     int n = nums.size();
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < n; j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

vector<int> pairSum(vector<int> nums, int target){
    int i = 0;
    int j = nums.size()-1;
    vector<int> ans(2,0);
    while (i < j){
        int temp = nums[i] + nums[j];
        if (temp < target){
            i++;
        }
        if (temp > target){
            j--;
        }
        if (temp == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 12;
    vector<int> ans = pairSum(nums,target);
    cout << ans[0] << ", " << ans[1] << endl;
    
    return 0;
}