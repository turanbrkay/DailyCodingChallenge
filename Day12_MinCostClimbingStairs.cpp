
#if 0
#include <vector>
#include <cmath>
int minCostClimbingStairs(std::vector<int>& cost) {
        int size = cost.size();
        std::vector<int> dp = {0};
        dp.reserve(size+1);
        dp[0]=0;
        dp[1]=0;

        for(int i=2; i<size+1; i++) {
                if (dp[i-2] + cost[i-2] < dp[i-1] + cost[i-1]) {
                        dp[i] = dp[i-2]+cost[i-2];
                }else {
                        dp[i] = dp[i-1]+cost[i-1];
                }
        }

        return dp[size];
}



#endif
