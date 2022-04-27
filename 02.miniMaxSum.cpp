#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>

void miniMaxSum(std::vector<double> arr)
{
    std::sort(arr.begin(), arr.end());
    
    int arrSize = arr.size();
    long int minSum = 0;
    long int maxSum = 0;

    for (int i = 0; i < arr.size()-1; i++)
    {
        minSum += arr[i];
    }

    maxSum = (minSum - arr[0] ) + arr[arrSize-1];

    std::cout << minSum << " " << maxSum << std::endl;

};

int main()
{
    std::vector<double> array = {256741038, 623958417, 467905213, 714532089, 938071625};

    miniMaxSum(array);


};