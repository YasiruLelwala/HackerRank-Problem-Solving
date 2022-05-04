#include <vector>
#include <iostream>

/* 
THE CHALLENGE
We have a square matrix. Add up the diagonals. Return the absolute difference
*/


int diagonalDifference(std::vector<std::vector<int>> arr) 
{
    long int rightDiagonal = 0;
    long int leftDiagonal = 0;
    long int absoluteDifference;

    for (int i = 0; i < arr.size(); i++)
    {
        rightDiagonal += arr[i][i];
        leftDiagonal += arr[i][arr.size()-1 - i];
    }

    absoluteDifference = abs(rightDiagonal - leftDiagonal);

    return absoluteDifference;
}

int main()
{
    std::vector<std::vector<int>> A = { {1,3,2}, {4,5,6}, {10,12,13} };

    int difference = diagonalDifference(A);

    std::cout << difference << std::endl;


}