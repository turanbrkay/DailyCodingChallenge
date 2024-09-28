


// greedy solution
#if 0
#include <vector>

bool canJump(std::vector<int>& nums) {
        if (nums.size() == 1 ) {
                return true;
        }
        int pointer = nums.size()-1;

        for (int i=pointer-1; i>=0; i--) {
                if (i+nums.at(i) >= pointer) {
                        pointer = i;
                }
        }

        if (pointer==0) {
                return true;
        }

        return false;
}





#endif


// dp solution
#if 0
#include <vector>

bool canJump(std::vector<int>& nums) {
        if (nums.size() == 1 ) {
                return true;
        }
        int farIndex = 0;

        for (int i=0; i<nums.size(); i++) {
                if (i>farIndex) {
                        return false;
                }
                if (i+nums.at(i) >= farIndex) {
                        farIndex = i+nums.at(i);
                }
        }
        return true;

}





#endif