#include <iostream>
#include <string>

/*
CHALLENGE
A debugging exercise. Change at most 3 lines. No adding or removing existing code.
Takes 2 strings of 1s and 0s. Return the XOR of the 2 strings.
*/

std::string strings_xor(std::string s, std::string t) 
{

    std::string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i]) // we changed "=" to "=="
            res += '0'; // we changed this where previously it was res = 0
        else
            res += '1'; // we changed this where previously it was res = 0
    }

    return res;
}

int main()
{
    std::string s("10101");
    std::string t("00101");

    std::string result = strings_xor(s,t);
    std::cout << result << " ";
}