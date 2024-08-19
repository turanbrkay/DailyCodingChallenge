//
// Created by turan on 8/19/2024.
//



#if 0
#include <unordered_map>
#include <iostream>

int longestPalindrome(std::string s) {
    if (s.size() == 1)
        return 1;

    std::unordered_map<char,int> map;

    int count = 0;
    for (int i=0; i<s.size(); i++) {
        if (map.find(s[i]) == map.end() || map.at(s[i]) == 0) {
            map[s[i]] = 1;
        }else {
            map[s[i]]--;
            count++;
        }
    }

    for (auto ch:map) {
        if (ch.second == 1) {
            return count+1;
        }
    }

    return count;

}


#endif