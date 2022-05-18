#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
/*
CHALLENGE
We have two vectors of integers (same size), A and B. 
We have an integer, k. 
Move around the elements within A and B such that all A[i] + B[i] >= k.
If this is the case, return "YES", else, "NO."

SOLUTION
Sort vector A in ascending order and B in descending order. 
This will ensure that we have the maximum possible sum for the smaller elements in vector and thus pass the threshold.
For each element in vector A, check to see if A[i] + B[i] is less than k. 
If so, return "NO."
*/
std::string twoArrays(int k, std::vector<int> A, std::vector<int> B) 
{
    // sort vector A in ascending order
    std::sort(A.begin(),A.end());

    // sort vector B in descending order
    std::sort(B.begin(),B.end(),std::greater<int>());

    int sum = 0;

    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] + B[i] < k) 
        {
            return std::string("NO");
        }
    }

    return std::string("YES");
}

int main()
{
    int k = 5;
    std::vector<int> A = {1,2,2,1};
    std::vector<int> B = {3,3,3,4};

    std::string result = twoArrays(k,A,B);
    std::cout << result;

    

    

}
