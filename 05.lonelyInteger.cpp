#include <vector>
#include <iostream>   
#include <algorithm>

int lonelyinteger(std::vector<int> a) 
{
    int uniqueElement;
    for(int i = 0; i < a.size(); i++)
    {
        int count = std::count(a.begin(),a.end(),a[i]);
        if (count == 1) 
        {
            uniqueElement = a[i];
        }
    }

    return uniqueElement;
};

int main()
{
    std::vector<int> a = {1,2,2,1,3,3,4};

    int uniqueElement = lonelyinteger(a);
    std::cout << uniqueElement << std::endl;
}