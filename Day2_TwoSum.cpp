//
// Created by turan on 8/10/2024.
//



#if 0
#include <unordered_map>
#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {

    std::unordered_map<int,int> map;
    std::vector<int> result;


    for (int i=0; i<nums.size() ; i++) {
        map[nums[i]] = i;
    }

    for (int i=0; i<nums.size() ; i++) {
        if((map.find(target-nums[i]) != map.end()) && (map[target-nums[i]] != i)) {
            return std::vector<int>{i,map[target-nums[i]]};
        }
    }

    return std::vector<int>{};
};

template<typename T>
void read_vector(std::vector<T> list) {
    for (int i=0; i<list.size(); i++) {
        std::cout << list[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> nums = {3,2,4};
    read_vector(twoSum(nums,6));
}

#endif

