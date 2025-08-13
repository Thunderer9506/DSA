#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int>& height) {
    int right = height.size() - 1;
    int left = 0;
    int res = 0;
    while(left < right){
        int width = right-left;
        res = max(res,min(height[right],height[left])*width);
        (height[left] < height[right]) ? left++ : right--;
    }
    return res;
}

int main(){
// [8,7,2,1]
// [1,8,6,2,5,4,8,3,7]
// [1,2,1]
// [1,2,4,3]
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl;
    return 0;
}