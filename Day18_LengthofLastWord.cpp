

#if 1
#include <iostream>
int lengthOfLastWord(std::string s) {
    int n = s.size();
    bool openBracket = false, closeBracket = false;
    int wordSize = 0;
    for (int i=n-1; i>=0 ; i--) {

        if (!openBracket && s[i] != ' ')
            openBracket = true;

        if (openBracket && s[i] == ' ')
            closeBracket = true;

        if (openBracket && s[i] != ' ')
            wordSize++;

        if (openBracket && closeBracket)
            return wordSize;


    }

    return wordSize;
}


#endif
