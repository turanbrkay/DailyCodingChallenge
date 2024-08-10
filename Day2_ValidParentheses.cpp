//
// Created by turan on 8/10/2024.
//


#if 0
#include <iostream>
#include <stack>

bool isValid(std::string s) {
    std::stack<char> characters;

    for (int i=0; i<s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            characters.push(s[i]);
        }else {
            if (characters.empty()) {
                return false;
            }else if(characters.top() == '(' && s[i] ==')') {
                characters.pop();
            } else if(characters.top() == '[' && s[i] ==']') {
                characters.pop();
            } else if(characters.top() == '{' && s[i] =='}') {
                characters.pop();
            } else {
                return false;
            }
        }
    }

    if (characters.empty()) {
        return true;
    }
    return false;
}

int main() {
    std::string s = "]";

    std::cout << isValid(s);

}
#endif