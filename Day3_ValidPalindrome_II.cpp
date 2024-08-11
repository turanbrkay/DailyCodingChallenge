//
// Created by turan on 8/11/2024.
//

#if 0
#include <iostream>


bool isPalindrom(std::string s) {
    int front = 0;
    int back = s.size()-1;

    while (back > front) {
        if (s.at(back) != s.at(front)) {
            return false;
        }else {
            back--;
            front++;
        }
    }
    return true;

}

bool validPalindrome(std::string s) {
    std::cin.tie(NULL);std::ios::sync_with_stdio(false);
    int front = 0;
    int back = s.size()-1;

    while (back > front) {
        if (s.at(back) != s.at(front)) {
            std::string s1 = s;  // s'in kopyası
            std::string s2 = s;  // s'in başka bir kopyası
            bool result1 = isPalindrom(s1.erase(back,1));
            bool result2 = isPalindrom(s2.erase(front,1));

            if (result1 || result2) {
                return true;
            }else {
                return false;
            }
        }else {
            back--;
            front++;
        }
    }
    return true;
}


int main() {
    std::string s = "abc";

    std::cout << validPalindrome(s) << '\n';
}

#endif