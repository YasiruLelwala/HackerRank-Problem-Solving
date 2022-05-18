#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

/*
CHALLENGE
Determine whether a phrase contains all letters of an alphabet (pangram) or not

SOLUTION
Convert all letters into lowercase.
Create a string of all letters of alphabet,
For each letter in alphabet, loop through the characters of the phrase,
and see if there is a match. Break the loop on the 1st match and add 1 to counter.
This is to avoid counting the same letter more than once in the string. 
Then move to the next letter in the alphabet. 
If the final count is 26, it is a pangram.
*/

std::string pangrams(std::string s) 
{
    std::string pangram("pangram");
    std::string notPangram("not pangram");

    // create a string of all the letters in the alphabet.
    std::string alphabet("abcdefghijklmnopqrstuvwxyz");
    
    // convert string, s, to lowercase
    std::for_each(s.begin(),s.end(),[](char &c) {
        c = ::tolower(c);
        return c;
    });

    // create a counter
    int count = 0;

    for (auto &i : alphabet)
    {
        for (auto &j : s)
        {
            if (i == j) 
            {
                count += 1;
                break; // when we find the first hit, break.
            }
        }
    }
    //std::cout << count;
    if (count == 26) 
    {
        return pangram;
    }
   
    return notPangram;
}


int main()
{
    std::string s("The quick brown fox jumps over the lazy ");

    std::string d = pangrams(s);

    

    std::cout << d;

}