


#if 1
#include <vector>
int rob(std::vector<int>& nums) {
    if (nums.size()==2) {
        return std::max(nums[0],nums[1]);
    } else if (nums.size() == 1) {
        return nums[0];
    }
    int n = nums.size();
    std::vector<int> dp = {0};
    dp.reserve(n);
    dp[0] = nums[0];
    dp[1] = nums[1];

    for (int i=2; i<n ; i++) {
        for (int k=i-2; k>=0; k--) {
            dp[i] = std::max(dp[i],dp[k]+nums[i]);
        }
    }

    return std::max(dp[n-1],dp[n-2]);
}

#endif
