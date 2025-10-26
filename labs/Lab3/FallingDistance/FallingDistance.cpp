/*
* Lab3
* Autumn Cummo
* COSC 1436 Fall 2025
*/

#include <iostream>
#include <string>
#include <iomanip>

/// <summary>Displays program information.</summary>
void ProgramInfo()
{
    std::cout << "Falling Distance" << std::endl;
    std::cout << "Autumn Cummo" << std::endl;
    std::cout << "COSC 1436 Fall 2025" << std::endl;
    std::cout << "______________________" << std::endl;
}

/// <summary>Prompt for falling time.</summary>
/// <returns></returns>
int FallingTime()
{
    int timeSeconds;

    do
    {
        std::cout << "Please enter the number of seconds: ";
        std::cin >> timeSeconds;

        if (timeSeconds >= 1 && timeSeconds <= 60)
            break;
        std::cout << "ERROR" << std::endl;
    } while (true);
    
    return timeSeconds;
}



int main()
{
    ProgramInfo();

    FallingTime();
    
}

