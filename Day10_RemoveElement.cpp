


#if 1
#include <vector>
#include <iostream>

int removeElement(std::vector<int>& nums, int val) {
        int pointer=0;
        std::ios::sync_with_stdio(false);
        for (int i=0; i<nums.size(); i++) {
                if (nums[i]!=val) {
                        nums[pointer++] = nums[i];
                }else {
                        nums[i] = 101;
                }
        }

        return pointer;
}




#endif