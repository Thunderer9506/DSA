// Leet code problem: 1

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> hashmap;
    vector<int> answer;

    int n = nums.size();

    for (int i = 0; i < n; i++){
        int otherEle = target - nums[i];
        if(hashmap.find(otherEle) != hashmap.end()){
            answer.push_back(hashmap[otherEle]);
            answer.push_back(i);
        } else{
            hashmap[nums[i]] = i;
        }
    }
    
    // for(pair i : hashmap ) cout << i.first << " " << i.second << endl;
    for(int i: answer) cout << i << " ";

    return 0;
}