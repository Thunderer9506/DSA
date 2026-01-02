// Leetcode Problem: 2149

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = {28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};
    int n = nums.size();
    // wrong answer
    // int currsign = 1;
    // for (int i = 0; i < n-2; i++){
    //     if ((nums[i] < 0) && (currsign > 0)){
    //         for (int j = i+1; j < n; j++){
    //             if (nums[j] > 0){
    //                 swap(nums[i],nums[j]);
    //                 break;
    //             }
    //         }
    //     } else if ((nums[i] > 0) && (currsign < 0)){
    //         for (int j = i+1; j < n; j++){
    //             if (nums[j] < 0){
    //                 swap(nums[i],nums[j]);
    //                 break;
    //             }
    //         }
    //     }
    //     if (currsign == 1) currsign = -1;
    //     else if(currsign == -1) currsign = 1;
    // }

    //  Brute Force Approach
    // vector <int> positiveNumber;
    // vector <int> negativeNumber;
    // vector <int> result;

    // for (int i = 0; i < n; i++){
    //     if (nums[i] > 0) positiveNumber.push_back(nums[i]);
    //     else negativeNumber.push_back(nums[i]);
    // }
    // for (int i = 0; i < positiveNumber.size(); i++){
    //     result.push_back(positiveNumber[i]);
    //     result.push_back(negativeNumber[i]);
    // }

    // Optimal Answer
    vector <int> result(n,0);
    int posindex = 0;
    int negindex = 1;
    for (int i = 0; i < n; i++){
        if (nums[i] < 0){
            result[negindex] = nums[i];
            negindex += 2;
        }else{
            result[posindex] = nums[i];
            posindex += 2;
        }
    }
    

    for(int i: result) cout << i << " ";
}