// Leetcode problem : 485

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,1,0,1,1,1};

    int maxCon = 0;
    int temp = 0;
    for(int i: nums){
        if (i == 1){
            temp += 1;
            maxCon = max(maxCon,temp);
        }
        else temp = 0;
    }
    cout << maxCon << endl;
    
    
    return 0;
}