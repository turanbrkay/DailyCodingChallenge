

#if 0
#include <vector>

int jump(std::vector<int>& nums) {
    if (nums.size() == 0 || nums.size() == 1) {
        return 0;
    }
    int totalJump = 0, lastReachableIndex = 0, nextBlockLastIndex=0;
    int targetIndex = nums.size()-1;

    for (int i=0; i<nums.size(); i++) {
        lastReachableIndex = std::max(lastReachableIndex,i+nums.at(i));

        if (i==nextBlockLastIndex) {
            nextBlockLastIndex = lastReachableIndex;
            totalJump++;

            if (lastReachableIndex >= targetIndex) {
                return totalJump;
            }
        }

    }

    return totalJump;


}

#endif
