//
// Created by turan on 8/11/2024.
//



#if 0
#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    int minProfit = INT_MAX;
    int maxProfit = 0;
    for (int i=0; i<prices.size(); i++) {
        if (prices[i]<minProfit) {
            minProfit = prices[i];
        }else if(prices[i]-minProfit > maxProfit){
            maxProfit = prices[i]-minProfit;
        }
    }

    return maxProfit;
}

int main() {
    std::vector<int> profit = {1,2,4,2,5,7,2,4,9,0,9};
    std::cout << maxProfit(profit);
}

#endif


#if 0

int maxProfit(std::vector<int>& prices) {
    int L = 0;
    int R = 1;
    int max = 0;
    for (int i=1; i<prices.size(); i++) {
        if (prices[R]-prices[L] > 0 ) {
            max = std::max(prices[R]-prices[L],max);
            R++;
        }else {
            L = i;
            R = i+1;
        }
    }

    return max;
}

#endif