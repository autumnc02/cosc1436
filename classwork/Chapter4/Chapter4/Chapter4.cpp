/*
* Chapter 4 
* COSC 1436
*/
#include <iostream>
#include <string>

int main()
{
std::cout << "Enter two values: ";

    int left, right;
    std::cin >> left >> right;

    // Relational operators ::= > >= < <= == !=
    //   Warning 1 - Equality and equals are similar and work in the same situations
    //   Warning 2 - Be very, very careful of floating point comparison for equality
    //                     consider using >= or <= instead unless comparing to an integer
    //   Warning 3 - strings compared by character values not by locale
    bool areEqual = left == right;
    std::cout << "areEqual = " << areEqual << std::endl;
    areEqual = left == right;
    std::cout << "areEqual = " << areEqual << std::endl;

   //areEqual = 10 == left;
   //areEqual = 10 = left;

    std::cout << "> " << (left > right) << std::endl;
    std::cout << "< " << (left < right) << std::endl;
    std::cout << ">= " << (left >= right) << std::endl;
    std::cout << "<= " << (left <= right) << std::endl;
    std::cout << "== " << (left == right) << std::endl;
    std::cout << "!= " << (left != right) << std::endl;

    float someValue = (10 / 3.0) * 3.0;
    float someOtherValue = (10 * 3.0) / 3.0;
    areEqual = someValue == someOtherValue;
    std::cout << areEqual << std::endl;

    // Comparison works but is case sensitive
    std::string name1 = "Bob";
    std::string name2 = "bob";
    std::cout << (name1 == name2) << std::endl;

    // To compare strings case insensitive use the strcmpi
    // > 0 ::= left > right
    // < 0 ::= left < right
    // == 0 ::= left == right
    areEqual = strcmpi(name1.c_str(), name2.c_str()) == 0;
}
