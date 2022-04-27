#include <string>
#include <vector>
#include <iostream>   
#include <algorithm>

std::vector<int> matchingStrings(std::vector<std::string> strings, std::vector<std::string> queries) 
{
    std::vector<int> frequency(queries.size(),0);


    for (int i = 0; i < queries.size(); i++)
    {
        frequency[i] = std::count(strings.begin(),strings.end(),queries[i]);
    }

    return frequency;
};


int main()
{
    std::vector<std::string> queries = {"1","2","3"};
    std::vector<std::string> strings = {"1","1","2"};

    std::vector<int> occurences = matchingStrings(strings, queries);

    for (int i = 0; i < occurences.size(); i++)
    {
        std::cout << occurences[i] << std::endl;
    }

}