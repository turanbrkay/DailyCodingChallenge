//
// Created by turan on 8/11/2024.
//


#if 0
#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    int profit = 0;

    for (int i=1; i<prices.size(); i++) {
        profit += std::max(prices[i]-prices[i-1],0);
    }

    return profit;
}

int main() {
    std::vector<int> profit = {1,2,3,4,5};
    std::cout << maxProfit(profit);
}
#endif


#if 0 // RUNTIME 100 BUT DIRTY
#include "../../../../../Program Files/JetBrains/CLion 2024.1.4/bin/mingw/x86_64-w64-mingw32/include/stdint.h"

#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {

    int min_price = INT_MAX;
    int max_price = 0;
    int profit = 0;
    for (int i=0; i<prices.size(); i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else if (prices[i]-min_price > max_price) {
            if(i==prices.size()-1 && prices[i] > min_price) {
                profit += prices[i]-min_price;
                break;
            }else if ((i==prices.size()-2) && (prices[i+1]>prices[i])) {
                profit += prices[i+1]-min_price;
                i++;
            }else if ((i!=prices.size()-2) && (prices[i+1]>prices[i])) {
                continue;
            }else if (prices[i+1]<prices[i]) {
                profit += prices[i]-min_price;
                min_price = INT_MAX;
            }

        }
    }

    return profit;
}

int main() {
    std::vector<int> profit = {1,2};
    std::cout << maxProfit(profit);
}

#endif
