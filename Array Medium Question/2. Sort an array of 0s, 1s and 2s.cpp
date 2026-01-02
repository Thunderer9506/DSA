// Leetcode problem: 75

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,0,2,1,0};
    
    int n = nums.size();

    int i=0,j=n-1,x=0;

    while (x <= j){
        if(nums[x] == 0){
            int temp = nums[x];
            nums[x] = nums[i];
            nums[i] = temp;
            x++;
            i++;
        } else if(nums[x] == 2){
            int temp = nums[x];
            nums[x] = nums[j];
            nums[j] = temp;
            j--;
        }
        else x++;
    }

    // cout << i << " " << j << " " << x << endl;
    // for (int y = 0; y < n; y++){
    //     if(nums[y] == 1){

    //     }
    // }
    

    for(int i : nums) cout << i << " ";
    return 0;
}


// int n = arr.size();
//         int low = 0;
//         int mid = 0;
//         int high = n-1;
//         while (mid <= high){
//             if (arr[mid] == 0){
//                 swap(arr[mid],arr[low]);
//                 mid++;
//                 low++;
//             }
//             else if (arr[mid] == 2){
//                 swap(arr[mid], arr[high]);
//                 high--;
//             }
//             else mid++;
//         }