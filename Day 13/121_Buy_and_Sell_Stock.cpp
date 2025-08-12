#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxprofit = 0;
    int bestbuy = prices[0];
    for(int i=0; i< prices.size(); i++){
        maxprofit = max(maxprofit, prices[i]-bestbuy);
        bestbuy = min(bestbuy,prices[i]);
    }
    return maxprofit;
}