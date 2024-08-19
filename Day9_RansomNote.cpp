//
// Created by turan on 8/19/2024.
//



#if 0
#include <unordered_map>
#include <iostream>

bool canConstruct(std::string ransomNote, std::string magazine) {

    std::cin.tie(NULL); std::ios::sync_with_stdio(false);
    int alphabet[26] = {0};

    for (int i=0; i<magazine.size(); i++) {
        alphabet[magazine[i]-'a']++;
    }


    for (int i=0; i<ransomNote.size(); i++) {
        if (alphabet[ransomNote[i]-'a'] == 0) {
            return false;
        } else {
            alphabet[ransomNote[i]-'a']--;
        }
    }

    return true;


}

#endif


/*std::cin.tie(NULL); std::ios::sync_with_stdio(false);
std::unordered_map<char,int> map;

for (int i=0; i<magazine.size(); i++) {
    if (map.find(magazine[i]) == map.end()) {
        map[magazine[i]] = 1;
    } else {
        map[magazine[i]]++;
    }
}


for (int i=0; i<ransomNote.size(); i++) {
    if (map.find(ransomNote[i]) == map.end() || map.at(ransomNote[i]) == 0) {
        return false;
    } else {
        map.at(ransomNote[i])--;
    }
}

return true;*/