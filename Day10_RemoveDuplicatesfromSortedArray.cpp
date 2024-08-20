


#if 0
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
        int pointer = 0;

        for (int i=0; i<nums.size(); i++) {
                if (nums[i]!=nums[i+1]) {
                        nums[pointer++]= nums[i];
                }else {
                        nums[i] = 101;
                }
        }
        nums[pointer++]= nums[nums.size()-1];
        return pointer;
}

#endif