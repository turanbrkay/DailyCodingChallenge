//
// Created by turan on 8/12/2024.
//



#if 1
#include <iostream>
#include <vector>

int search(std::vector<int>& nums, int target) {
    double i = int(nums.size()/2);

    int lower = 0;
    int mid;
    int upper = nums.size()-1;


    while (lower <= upper) {
        mid = lower + (upper - lower) / 2;

        if (nums[mid]==target) {
            return mid;
        }else if (nums[mid]<target) {
            lower = mid+1;
        }
        else if (nums[mid]>target) {
            upper = mid-1;
        }
    }
    return -1;


}

int main() {
    std::vector<int> nums = {2,5};
    std::cout << search(nums,2) << '\n';
    std::cin.get();
}

#endif