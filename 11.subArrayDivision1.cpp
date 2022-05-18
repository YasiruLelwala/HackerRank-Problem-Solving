#include <iostream>
#include <vector>

/*
CHALLENGE
Return the number of ways that elements could be added up (in a contiguous manner) 
such that the number of elements is equal to the length m,
and the sum is equal to d.
SOLUTION
For each element in the vector, we add the series of elements, from i to i+m (the length required).
If the sum is equal to d, we increment a counter varible.  
*/

int birthday(std::vector<int> s, int d, int m) 
{
    int count = 0;
    int sum = 0;
    int numberOfWaysToSplitChocolate = 0;

    for (int i = 0; i < s.size(); i++)
    {
        count = 1;
        sum = s[i];

        for (int j = i; j < s.size(); j++)
        {
            if (count == m) // starting with the if condition to check for cases when the size of vector is 1. 
            {
                if (sum == d)
                {
                    numberOfWaysToSplitChocolate += 1;
                }
                break;
            }

            sum += s[j+1];
            count += 1;   
        }
    }   
    return numberOfWaysToSplitChocolate;    
}


int main()
{
    //std::vector<int> A = {4};
    std::vector<int> A = {2, 5, 1, 3, 4, 4, 3, 5, 1, 1, 2, 1, 4, 1, 3, 3, 4, 2, 1};
    int d = 18; // the sum
    int m = 7; // the length;

    // std::vector<int> A = {1,2,1,3,2,1};
    // int d = 3;
    // int m = 2;

    //  std::vector<int> A = {4};
    //  int d = 4;
    //  int m = 1;


    
    int numberOfWaysToSplitChocolate = birthday(A,d,m);
    std::cout << numberOfWaysToSplitChocolate;
}