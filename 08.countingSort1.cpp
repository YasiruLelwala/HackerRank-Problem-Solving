#include <iostream>
#include <vector>

/* 
THE CHALLENGE
Given a list of integers, count and return the number of times each value appears as an array of integers.

THE SOLUTION  
Create an integer array (results) whose index range covers the entire range of values in your array to sort. 
We use a results array of 100 elements implying that the values in the original array cannot be greater than 99.
results[i] = i implies that the integer i appears in the original array, i times. 
*/


std::vector<int> countingSort(std::vector<int> arr) 
{
    std::vector<int> results(100,0);

    for (int i = 0; i < results.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == arr[j])
            {
                results[i] += 1;
            }
        }
    }

    return results;
}

int main()
{
    std::vector<int> arr = {1,1,3,2,1};

    std::vector<int> results = countingSort(arr);
    for (int i = 0; i < results.size(); i++)
    {
        std::cout << results[i] << " ";
    } 

}