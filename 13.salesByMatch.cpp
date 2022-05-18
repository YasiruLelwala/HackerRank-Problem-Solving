#include <iostream>
#include <vector>
#include <algorithm>

int sockMerchant(int n, std::vector<int> ar) 
{
    // We are going to use counting sort to identify the number of times a unique element appears in ar.

    // sort ar by ascending order
    std::sort(ar.begin(),ar.end());

    // create a results vector of size equal to the largest number of ar
    std::vector<int> results(ar[ar.size()-1] + 1,0);

    // identifying the count of uniqiue elements in the ar vector. 
    // results[i] = i implies that the integer i appears in arr, i times.
    for (int i = 0; i < results.size(); i++)
    {
        for (int j = 0; j < ar.size(); j++)
        {
            if (i == ar[j])
            {
                results[i] += 1;
            }
        }
    }

   // Divide each element of the results vector by 2. Add up all the whole numbers. 

    int sum = 0;
    int noOfPairs = 0;

    for (int i = 0; i < results.size(); i++)
    {
        sum += results[i] / 2;
    }
    
    noOfPairs = sum;
    
    return noOfPairs;
}

std::vector<int> countingSort(std::vector<int> arr) 
{
    // sort ar by ascending order
    std::sort(arr.begin(),arr.end());

    // create a results vector of size equal to the largest number of ar
    std::vector<int> results(arr[arr.size()-1]+1,0);


    //std::vector<int> results(100,0);

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
    int n = 10; // number of socks
    std::vector<int> arr = {1, 1, 3, 1, 2, 1, 3, 3, 3, 3}; // the color of each sock

     int noOfPairs = sockMerchant(n,arr);

     std::cout << std::endl;

    std::cout << noOfPairs;
    // std::vector<int> results = countingSort(arr);

    // for (int i = 0; i < results.size(); i++)
    // {
    //     std::cout << results[i] << " " ;
    // }
    
}
