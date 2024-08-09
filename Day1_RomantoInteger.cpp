//
// Created by turan on 8/9/2024.
//


#if 0
#include <unordered_map>
#include <iostream>
#include <vector>

int romanToInt(std::string& s) {

    std::unordered_map <char,int> romanCharacters{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

    int sum = 0;

    for(int i = 0; i < s.length(); i++) {
        if (romanCharacters[s[i]] < romanCharacters[s[i+1]] ) {
            sum -= romanCharacters[s[i]] ;
        } else {
            sum += romanCharacters[s[i]];
        }
    }

    return sum;

}


int main() {
    std::string s = "IV";
    std::cout << romanToInt(s) << std::endl;

}

#endif
