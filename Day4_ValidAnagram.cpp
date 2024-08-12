//
// Created by turan on 8/12/2024.
//



#if 0
#include <unordered_map>
#include <iostream>


bool isAnagram(std::string s, std::string t) {
        std::unordered_map<char,int> secondText;

        if (s.size() != t.size()) {
                return false;
        }

        for (char& ch: t) {
                if (secondText.find(ch) == secondText.end()) {
                        secondText[ch] = 1;
                }else {
                        secondText.at(ch)++;
                }
        }

        for (int i=0; i<s.size(); i++) {
                if (secondText.find(s[i]) == secondText.end() || secondText.at(s[i]) == 0) {
                        return false;
                }else {
                        secondText.at(s[i])--;
                }
        }

        return true;

}


int main() {
        std::string s = "a";
        std::string t =  "ab";

        std::cout << isAnagram(s,t) << '\n';

}

#endif


#if 0
#include <unordered_map>
#include <iostream>


bool isAnagram(std::string s, std::string t) {
        if (s.size()!=t.size())
                return false;

        int counter[26] = {0};

        for (int i=0; i<s.size(); i++) {
                counter[s[i]-'a']++; // find index for word
                counter[t[i]-'a']--;
        }

        for (int i: counter) {
                if (i!=0)
                        return false;
        }

        return true;

}


int main() {
        std::string s = "ab";
        std::string t =  "ab";

        std::cout << isAnagram(s,t) << '\n';

}

#endif