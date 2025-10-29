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

/// <summary>Prompt for falling time in seconds.</summary>
/// <returns>Returns the validated time.</returns>
int FallingTime()
{
    int totalTime;

    do
    {
        std::cout << "Please enter the number of seconds: ";
        std::cin >> totalTime;

        if (totalTime >= 1 && totalTime <= 60)
            break;
        else
        std::cout << "ERROR" << std::endl;
    } while (true);
    
    return totalTime;
}

/// <summary>Calculates falling distance.</summary>
/// <param name="t">Time in seconds.</param>
/// <returns>Returns the falling distance in meters.</returns>
double CalculateDistance(int t)
{
    const double g = 9.8; //meters
    double fallingDistance = 0.5 * g * (t * t);
    return fallingDistance;
}

/// <summary>Calculates velocity.</summary>
/// <param name="t">Time in seconds.</param>
/// <returns>Returns velocity in meters per second.</returns>
double CalculateVelocity(int t)
{
    const double g = 9.8;
    double velocity = g * t;

    if (velocity > 90)
        velocity = 90;

    return velocity;
}

/// <summary>Converts meters to feet.</summary>
/// <param name="fallingDistance">Distance in meters.</param>
/// <returns>Returns the equivalent distance in feet.</returns>
double ConvertToFeet(double fallingDistance)
{
    return fallingDistance * 3.28084;
}

/// <summary>Displays a table of time, distance and velocity.</summary>
/// <param name="totalTime">Total time in seconds.</param>
/// <param name="unitChoice">Chosen unit of measurement.</param>
void DisplayTable(int totalTime, char unitChoice)
{
    std::cout << std::fixed << std::setprecision(2);

    //Header
    std::cout << std::setw(10) << std::left << "Seconds" << std::right << std::setw(12) << "Distance" << std::setw(13) << "Velocity"
              <<  std::endl;
    std::cout << "======================================" << std::endl;
   
    for (int t = 1; t <= totalTime; t++)
    {
        double fallingDistance = CalculateDistance(t);
        double velocity = CalculateVelocity(t);

        if (unitChoice == 'F' || unitChoice == 'f')
        {
            fallingDistance = ConvertToFeet(fallingDistance);
            velocity = ConvertToFeet(velocity);
        }

        if (velocity > 90)
        {
            velocity = 90;
        }

        std::string distanceUnit;
        std::string velocityUnit;

        if (unitChoice == 'F' || unitChoice == 'f')
        {
            distanceUnit = "ft";
            velocityUnit = "ft/s";
        } else
        {
            distanceUnit = "m";
            velocityUnit = "m/s";
        }

        std::cout << std::setw(10) << std::left << t << std::right << std::setw(10) << fallingDistance <<  distanceUnit
            << std::setw(11) << velocity << velocityUnit << std::endl;
    }
}

int main()
{
    ProgramInfo();

    //////////////////////////////
    int totalTime = FallingTime();

    // Get units
    char unitChoice;

    do
    {
        std::cout << "Do you want the results in meters or feet? ";
        std::cin >> unitChoice;

        if (unitChoice == 'M' || unitChoice == 'm')
        {
            break;
        }
        else if (unitChoice == 'F' || unitChoice == 'f')
        {
            break;
        }
        else
        {
            std::cout << "Invalid value" << std::endl;
        } 
    } while (true);

    ////////////////////////////////////
    DisplayTable(totalTime, unitChoice);
    
}

