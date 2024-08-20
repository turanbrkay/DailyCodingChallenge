


#if 0
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.size() == 1 || nums.size() ==2)
        return nums.size();

    int back = 0,front=1;

    for (int i=2; i<nums.size(); i++) {
        if (nums[i]==nums[back] && nums[i]==nums[front]) {
            nums.erase(nums.begin()+i);
            i--;
        }else {
            front++;
            back++;
        }

    }
    return front+1;
}


#endif
