/*
*Your Name
* Lab #
* COSC 1436 Fall 2025
*/
#include <iostream>

int main()
{
    std::cout << "Hello World " << " " << "Your Name" << std::endl;
    std::cout << "You are " << 20 << " years old" << std::endl;
    std::string name;
    name = "Name";
    std::cout << "Hello World" << name;

    //var-decl ::= T id;
    //type = defines what can be stored in the variable and in what format
    int age;
    age = 20;
    std::cout << "You are " << age << " years old";

    // Area of rectangle calculator
    // A = lw
   //int length;
   //int width;
   //int length, width;

    //length = 10;
    //width = 20;
    int length = 10, width = 20;

    //Uninitilized variable- YOU MUST assign a alue to a variable before you read it
    //int area;
    // area = 0;
    int area = 0;
   // area = length * width;

    std::cout << "Area of rectangle is " << area << std::endl;

   //2 different pproaches to variable declarations
   // Block - all variables together 
    //int radius, diameter;
    //std::string circleName;

   //Now I can use the variables

    //Inline - variable are eclared just before they are used
    int radius, diameter;
    //Use radius, diameter

    std::string circleName;
    //Use circleName

    double pi;
    pi = 3.14159;

    char letterGrade;
    letterGrade = 'A';

    bool isPassing;
    isPassing = true;

    area = length * width;

    //Assignment is right associative
    //length = 100;
    //width = 100;
    length = width = 100;

    //Arithmetic operators
    // arith-op ::= + | - | * | / | %
    length = length + 10;
    width = width - 20;

    //int dvision ::= int / int produces an int, remainder is lost
    double result = 10 / 3; // = 3

    // Modulus is remainder and ONLY works for integral types
    double remainder = 10 % 3; 

    int negativeLength = -length;
}

