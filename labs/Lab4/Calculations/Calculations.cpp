/*
* Lab4
* Autumn Cummo
* COSC 1436 Fall 2025
*/

#include <iostream>
#include <string>
#include <iomanip>

/// <summary>Dsiplays program information.</summary>
void ProgramInfo()
{
    std::cout << "Calculations" << std::endl;
    std::cout << "Autumn Cummo" << std::endl;
    std::cout << "COSC 1436 Faall 2025" << std::endl;
    std::cout << "_______________________" << std::endl;
}

/// <summary>Prompts for values and stores them in array.</summary>
/// <param name="values">The array to store inputed values.</param>
/// <param name="size">The maximum number of values the array holds.</param>
/// <returns>The values entered.</returns>
int GetValues(int values[], int size)
{
    int input;
    int index = 0;

    while (index < size)
    {
        std::cout << "Enter a value: ";
        std::cin >> input;

        if (input == 0)
        {
            break;
        }
        else if (input < 0)
        {
            std::cout << "You must enter a value greater than or equal to 0" << std::endl;
            continue;
        }
        else
        {
            values[index] = input;
            index++;
        }
    }
    return index;
}

/// <summary>Displays main menu.</summary>
/// <returns>The option chosen.</returns>
char DisplayMainMenu()
{
    std::cout << "Main Menu" << std::endl;
    std::cout << "________________________" << std::endl;
    std::cout << "A) dd" << std::endl;
    std::cout << "L) argest" << std::endl;
    std::cout << "M) ean" << std::endl;
    std::cout << "S) mallest" << std::endl;
    std::cout << "I) nsert" << std::endl;
    std::cout << "V) iew" << std::endl;
    std::cout << "Q) uit" << std::endl;

    char choice;
    std::cin >> choice;

    return choice;
}

/// <summary>Displays the largest value entered.</summary>
/// <param name="values">Stored values in the array.</param>
/// <param name="size">Number of valid values.</param>
void GetLargest(int values[], int size)
{
    int largest = values[0];

    for (int index = 1; index < size; ++index)
    {
        if (values[index] > largest)
        {
            largest = values[index];
        }
    }
    std::cout << "Largest = " << largest << std::endl;
}

/// <summary>Displays the smallest value entered.</summary>
/// <param name="values">Stored values in array.</param>
/// <param name="size">Number of valid values.</param>
void GetSmallest(int values[], int size)
{
    int smallest = values[0];

    for (int index = 1; index < size; ++index)
    {
        if (values[index] < smallest)
        {
            smallest = values[index];
        }
    }
    std::cout << "Smallest = " << smallest << std::endl;
}

/// <summary>Calculates and displays the sum.</summary>
/// <param name="values">Stored values in the array.</param>
/// <param name="size">Number of valid values.</param>
void GetSum(int values[], int size)
{
    int sum = 0;

    for (int index = 0; index < size; ++index)
    {
        sum += values[index];
    }
    std::cout << "Sum = " << sum << std::endl;
}

/// <summary>Calculates and displays the mean.</summary>
/// <param name="values">Stored values in the array.</param>
/// <param name="size">Number of valid values.</param>
void GetMean(int values[], int size)
{
    int sum = 0;

    for (int index = 0; index < size; ++index)
    {
        sum += values[index];
    }

    double mean = sum * 1.0 / size;

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Mean = " << mean << std::endl;
}

/// <summary>Displays all values entered.</summary>
/// <param name="values">Stored values in the array.</param>
/// <param name="size">Number of valid values.</param>
void ViewValues(int values[], int size)
{
    int index = 0;

    while (index < size)
    {
        for (int col = 0; col < 10 && index < size; ++col)
        {
            std::cout << values[index] << " ";
            ++index;
        }
        std::cout << std::endl;
    }
}

/// <summary>Allows user to insert additional values.</summary>
/// <param name="values">The array to add values to.</param>
/// <param name="size">The maximum capacity of the array.</param>
/// <param name="index">Reference to the current number of values in the array.</param>
void InsertValues(int values[], int size, int &index)
{
    int input = 0;

    for (; index < size; ++index)
    {
        std::cout << "Enter a value: ";
        std::cin >> input;

        if (input > 0)
        {
            values[index] = input;
        }
        else if (input == 0)
        {
            break;
        }
        else
        {
            std::cout << "You must enter a value greater than or equal to 0" << std::endl;
        }
    }
}

int main()
{
    ProgramInfo();

    ///////////////////
    int size = 100;
    int values[100];

    int index = GetValues(values, size);

    //Display main menu
    bool done = false;
    
    do
    {
        char choice = DisplayMainMenu();

        switch (choice)
        {
            case 'A':
            case 'a': GetSum(values, index); break;

            case 'L':
            case 'l': GetLargest(values, index); break;

            case 'M':
            case 'm': GetMean(values, index); break;

            case 'S':
            case 's': GetSmallest(values, index); break;

            case 'I':
            case 'i': InsertValues(values, size, index); break;

            case 'V':
            case 'v': ViewValues(values, index); break;

            case 'Q':
            case 'q': done = true; break;

            default: std::cout << "Invalid choice" << std::endl;
        }
    } while (!done);
    

}
