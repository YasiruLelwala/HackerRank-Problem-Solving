#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
#include <ostream>
#include <fstream>

using namespace std;

/*
 
 */

string timeConversion(string s) 
{
    std::string amPm = s.substr(8,2);
    std::string firstTwoDigitsString = s.substr(0,2);
    int firstTwoDigits = std::stoi(firstTwoDigitsString);
    std::string remainingDigitsString = s.substr(2,6);
    std::string militaryTime;

    if (amPm == "PM") 
    {
        if (firstTwoDigits == 12) 
        {
            firstTwoDigits = 12;
        }
        else 
        {
            firstTwoDigits += 12;
        }

        militaryTime = std::to_string(firstTwoDigits) + remainingDigitsString;
    }
    else
    {
         if (firstTwoDigits == 12) 
        {   
            
            militaryTime = "00" + remainingDigitsString;
        }
        else if (firstTwoDigits < 12)
        {
            militaryTime = "0" + std::to_string(firstTwoDigits) + remainingDigitsString;
        }
        else 
        {
            militaryTime = std::to_string(firstTwoDigits) + remainingDigitsString;
        }
    }

    return militaryTime;
}


    

int main()
{
    std::string twelveHourTime = "04:59:59AM";

    std::cout << timeConversion(twelveHourTime) << std::endl;





    
}

// if (amPm == "PM")
//     {
//         if (firstTwoDigits == 12) 
//         {
//             firstTwoDigits = 12;
//         }
//         else 
//         {
//             firstTwoDigits += 12;
//         }

//         militaryTime = std::to_string(firstTwoDigits) + remainingDigitsString;
//     }
//     else 
//     {   
//         if (firstTwoDigits == 12) 
//         {   
            
//             militaryTime = "00" + remainingDigitsString;
//         }

//         else
        
//         militaryTime = std::to_string(firstTwoDigits) + remainingDigitsString;
//     }
//     return militaryTime;    
// }