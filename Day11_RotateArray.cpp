

#include <algorithm>
#if 1
#include <vector>
#include <iostream>
void rotate(std::vector<int>& nums, int k) {

    std::reverse(nums.begin(),nums.end());
    std::reverse(nums.begin(),k+nums.begin());
    std::reverse(nums.begin()+k+1,nums.end());

}


#endif
