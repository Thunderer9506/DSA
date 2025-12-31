#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> arr2 = {2,3,4,4,5,11,12,12};
    vector<int> unionArr = {};
    
    int i = 0,j = 0;
    while ((i != arr1.size()) && (j != arr2.size())){
        int candidate = 0;
        if (arr1[i] < arr2[j]){
            candidate = arr1[i];
            i++;
        } else if(arr2[j] < arr1[i]){
            candidate = arr2[j];
            j++;
        } else{
            candidate = arr2[j];
            j++;
            i++;
        }
        if((unionArr.size() == 0) || (unionArr.back() != candidate)){
            unionArr.push_back(candidate);
        }
    }
    while (i < arr1.size()){
        if((unionArr.size() == 0) || (unionArr.back() != arr1[i])){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    while (j < arr2.size()){
        if((unionArr.size() == 0) || (unionArr.back() != arr2[j])){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    
    for(int i: unionArr){
        cout << i << " ";
    }
    
    
    return 0;
}