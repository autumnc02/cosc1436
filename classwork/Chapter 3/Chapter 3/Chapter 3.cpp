#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

void main()
{
    std::cout << "Enter values for X and Y: ";

    double x, y;
    std::cin >> x >> y;

    // Function X  Y  Result
    //------------------------
    std::cout << std::fixed;
    std::cout << std::setw(9) << "Function " << std::setw(7) << " X " << std::setw(7) << " Y " << std::setw(12) << "Result" << std::endl;
   

    std::cout << std::setw(9) << "pow " << std::setw(7) << x << std::setw(7) << y << std::setw(12) << pow(x, y) << std::endl;
    std::cout << std::setw(9) << "sqrt " << std::setw(7) << x << std::setw(7) << y << std::setw(12) << sqrt(x) << std::endl;


    std::cout << std::setw(9) << "ceil " << std::setw(7) << x << std::setw(7) << y << std::setw(12) << ceil(x) << std::endl;
    std::cout << std::setw(9) << "floor " << std::setw(7) << x << std::setw(7) << y << std::setw(12) << floor(x) << std::endl;

    std::cout << std::setw(9) << "round " << std::setw(7) << x << std::setw(7) << y << std::setw(12) << round(x) << std::endl;
    std::cout << std::setw(9) << "trunc " << std::setw(7) << x << std::setw(7) << y << std::setw(12) << trunc(x) << std::endl;


}

void ExpressionDemo()
{
    //prompt user fr radius of circle
    std::cout << "Enter radius: ";

    // cin is used to get input from user
    // Use the input stream operator >> before the variable name
    int radius = 0;
    std::cin >> radius;

    const double Pi = 3.14159;

    // Area = pi * R^2
    // double * int * int => double 
    double area = Pi * radius * radius;
    std::cout << "Area = " << Pi << " * " << radius << " * " << radius << std::endl;
    std::cout << "Area = " << area << std::endl;

    //Triangle
    std::cout << "Enter base and height of triangle: ";

    int base = 0, height = 0;
    //std::cin >> base;
    //std::cin >> height; 
    std::cin >> base >> height;

    // Area = 1/2 * base * height
    // (double / int) * int * int => double
    area = (1.0 / 2) * base * height;
    std::cout << "Area = " << area << std::endl;

    std::cout << "Enter name: ";

    std::string name;
    //std::cin >> name;
    std::cin.ignore();
    std::getline(std::cin, name);  //getline is used to read strings with spaces in them
    std::cout << name << std::endl;

    //Overflow and underflow
    short smallValue = 32767;
    smallValue = smallValue + 1;

    short largeValue = -32768;
    largeValue = largeValue - 1;

    std::cout << smallValue << " " << largeValue << std::endl;

    //Type coercion - compiler implicitly converts an expression's type to a larger type

    //Type casting - you explicitly convert an expresion's type to another type
    //c-type casting

    int left = 10;
    int right = 3;

    double intDivision = 10 / 3; //int
    intDivision = 10.0 / 3;   // double / int => double
    intDivision = 10 / 3.0;   // double / int => double

    int intDivision = 10 / 3; //int / int => int
    intDivision = left / right; // int / int => int

    intDivision = static_cast<double>(left) / right; // double / int => double

    intDivision = (double)left / right; // double / int => double

    //This is wrong and will not produce 5
    intDivision = (int)"5";
   // intDivision = static_cast<int>("5"); //Compiler error

    //Math functions
    //pow(x, y) => power X to the Y power
    //sqrt(x) => squqare root of X
    // abs(x) => absolute value of X
    //
    //ceil(x) => smallest possible integral value >= X
    //floor(x) => largest possible integral value <= X

    //round(x) => rounds a float to n int using midpoint rounding
    // trunc(x) => truncates a float to an int

    // exp(x) => exponential E raises to X power, E = 2.17828
    // log(x) => logarithm, inverse of exp

    double result;
    result = pow(5, 3); //5 * 5 * 5 = 125
    result = pow(125, -3); //cube root of 125

    result = sqrt(100); // 10

    result = abs(-10); //10
    result = abs(10); //10

    result = ceil(14.5); // 15
    result = floor(3.1); // 

    result = trunc(14.5); // 14
    result = trunc(3.1); // 3

    result = exp(4);
    result = log(exp(4));  // 4



}