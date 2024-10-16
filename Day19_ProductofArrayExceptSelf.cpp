

#include <iostream>
#if 0
#include <vector>
std::vector<int> productExceptSelf(std::vector<int>& nums) {

    std::vector<int> result(nums.size(),1);

    for (int i=1; i<nums.size(); i++) {
        result.at(i) = nums[i-1] * result[i-1];
    }
    int rightCalculator=nums[nums.size()-1];
    for (int i=nums.size()-2; i>=0; i--) {
        result[i] *= rightCalculator;
        rightCalculator *= nums[i];
    }

    return result;

}

int main() {
    std::vector<int> example{1,2,3,4};
    productExceptSelf(example);
}

#endif
