#include <iostream>
#include <vector>

int birthday(std::vector<int> s, int d, int m) 
{
    // number of blocks the vector s can be split into.
    int numberOfChunks = s.size() / m;

    int count = 0;
    int sum = 0;
    int numberOfWaysToSplitChocolate = 0;

    // iterating upto the last element where a full chunk can be created.  
    for (int i = 0; i < numberOfChunks * m; i++)
    {
        count += 1;
        sum += s[i];

        if (count == m) // if the count is equal to the length, m, set the count to 0 and check for whether sum is equal to d. Set sum also equal to 0.
        {
            count = 0;
            if (sum == d)
            {
                numberOfWaysToSplitChocolate += 1;
            }
            sum = 0;
        }
    }
    return numberOfWaysToSplitChocolate;
}



int main()
{
    std::vector<int> A = {1,2,1,3,2};
    int m = 2;
    int d = 3;
    
    int numberOfWaysToSplitChocolate = birthday(A,d,m);
    std::cout << numberOfWaysToSplitChocolate;

}

int count = 1; // starting the count at 1. 
    int sum = 0;
    int numberOfWaysToSplitChocolate = 0;

    for (int i = 0; i < s.size(); i++)
    {
        sum = s[i];
        
        
        for (int j = i+1; j < s.size(); j++)
        {
            sum += s[j];
            count += 1; 

            if (count == m) // if the count is equal to the length, m, set the count to 0 and check for whether sum is equal to d. Set sum also equal to 0.
            {
                count = 1;
                if (sum == d)
                {
                    numberOfWaysToSplitChocolate += 1;
                }
                break;
            }
        }
    }
    return numberOfWaysToSplitChocolate;