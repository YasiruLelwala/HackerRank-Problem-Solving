#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

void plusMinus(std::vector<int> arr)
{
    // size of the array
    int arraySize = arr.size();

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < arraySize; i++)
    {
        if (arr[i] > 0) 
        {
            positiveCount += 1;
        }
        else 
        if (arr[i] < 0)
        {
            negativeCount += 1;
        }
        else
        {
            zeroCount += 1;
        }
    };

    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    
    float positiveRatio = static_cast<float>(positiveCount) / static_cast<float>(arraySize);
    float negativeRatio = static_cast<float>(negativeCount) / static_cast<float>(arraySize);
    float zeroRatio = static_cast<float>(zeroCount) / static_cast<float>(arraySize);

    std::cout << positiveRatio << std::endl;
    std::cout << negativeRatio << std::endl;
    std::cout << zeroRatio << std::endl;

};

int main()
{
    std::vector<int> array = {1,2,-1,-2};

    plusMinus(array);


};