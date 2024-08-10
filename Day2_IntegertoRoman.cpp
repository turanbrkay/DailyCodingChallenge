//
// Created by turan on 8/10/2024.
//

#if 0
#include <unordered_map>
#include <iostream>
#include <vector>

std::string intToRoman(int num) {
    std::vector<std::pair<int,std::string>> roman_alphabet{{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};

    std::string roman_characters;

    for(int i=roman_alphabet.size()-1; i>=0 ; i--) {
        while(num >= roman_alphabet[i].first ) {
            num -= roman_alphabet[i].first;
            roman_characters.append(roman_alphabet[i].second);
        }
    }

    return roman_characters;

}


int main() {

    std::cout << intToRoman(3749) << std::endl;

}

#endif