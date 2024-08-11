//
// Created by turan on 8/11/2024.
//




#if 0 // MORE CLEAN BUT SLOWER THAN DOWNWARD
#include <iostream>

bool isPalindrome(std::string& s) {
    std::cin.tie(NULL);std::ios::sync_with_stdio(false);
    int back = s.size()-1;
    int front = 0;

    while (back>front) {
        if (!isalnum(std::tolower(s.at(front)))) {
            front++;
        }else if(!isalnum(std::tolower(s.at(back)))) {
            back--;
        }else if(std::tolower(s.at(front)) == std::tolower(s.at(back))) {
            back--;
            front++;
        }else {
            return false;
        }
    }

    return true;
}

int main() {
    std::string s = "A man, a plan, a canal: Panama";

    std::cout << isPalindrome(s) << '\n';
}

#endif




#if 0 //THIS SOLUTION IS NOT CLEAN BECAUSE I HAVEN'T KNOWN ISALNUM() FUNCTION BUT THIS IS FASTER THAN OTHERS.
     // BUT THIS SOLUTION'S RUNTIME IS SUPER.
#include <iostream>

bool isPalindrome(std::string& s) {
    std::cin.tie(NULL);std::ios::sync_with_stdio(false);
    int back = s.size()-1;
    int front = 0;

    while (back>front) {
        if ((s[front] < 'A' || (s[front] > 'Z' && s[front] < 'a') || s[front] > 'z') &&
            (s[front] > '9' || s[front] < '0')) {
            front++; }
        else if ((s[back] < 'A' || (s[back] > 'Z' && s[back] < 'a') || s[back] > 'z') &&
                (s[back] > '9' || s[back] < '0')) {
            back--;
               }
        else if(std::tolower(s.at(front)) == std::tolower(s.at(back))) {
            back--;
            front++;
        }
        else if (s.at(front) == ' ') {
            front++;
        }else if (s.at(front) == ' ') {
            back--;
        }else {
            return false;
        }
    }

    return true;
}

int main() {
    std::string s = "221";

    std::cout << isPalindrome(s) << '\n';
}

#endif
