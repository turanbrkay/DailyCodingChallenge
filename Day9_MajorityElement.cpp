//
// Created by turan on 8/19/2024.
//


#if 0
#include <vector>
#include <iostream>

#include <algorithm>
#include <fstream>

#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast", "inline", "ffast-math", "unroll-loops")
int init = [] {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::ofstream out("user.out");

    for (std::string s; getline(std::cin, s); out << '\n') {
        int ans = 0;
        int c = 0;

        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {
            bool _neg = false;

            if (s[_i] == '-') {
                ++_i;
                _neg = true;
            }

            int v = s[_i++] & 15;

            while ((s[_i] & 15) < 10)
                v = v * 10 + (s[_i++] & 15);

            if (_neg)
                v = -v;

            if (c == 0)
                ans = v;

            ans == v ? ++c : --c;
        }
        out << ans;
    }
    out.flush();
    exit(0);
    return 0;
}();


int majorityElement(std::vector<int>& nums) {

    std::sort(nums.begin(),nums.end());
    int count = (nums.size()/2);

    for (int i=0; i<nums.size()-count; i++) {
        if (nums[i] == nums[i+count]) {
            return nums[i];
        }
    }

    return -1;
}

int main() {
    std::vector<int> aa = {2,2,1,1,1,2,2};
    std::cout << majorityElement(aa) << '\n';
    std::cin.get();

}
#endif