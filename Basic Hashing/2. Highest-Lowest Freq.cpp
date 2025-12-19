#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int Arr[] = {2,2,3,4,4,2};
    const int n = sizeof(Arr)/ sizeof(Arr[0]);

    unordered_map<int,int> freq;
    for (int i = 0; i < n; i++){
        if(freq.find(Arr[i]) != freq.end()){
            freq.find(Arr[i])->second += 1;
        }else {
            freq[Arr[i]] = 1;
        }
    }
    int max = 0;
    int min = 10;
    for(pair i: freq){
        if (i.second > max) max = i.second;
        if (i.second < min) min = i.second;
    }
    cout << max << " " << min;

    return 0;
}