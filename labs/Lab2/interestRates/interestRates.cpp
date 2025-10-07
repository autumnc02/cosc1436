/*
* Lab2
* Autumn Cummo
* COSC 1436 Fall 2025
*/

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    //Details
    double loanBalance;      //Required, 1-1000
    double interestRate;  //Required, 1.0-100.0

    //Prompt for initial loan
    std::cout << "Please enter the loan amount ($1-1000): ";
    std::cin >> loanBalance;
    while (loanBalance < 1 || loanBalance > 1000)
    {
        std::cout << "Loan amount must be between $1 and $1000" << std::endl;
        std::cout << "Please enter the loan amount ($1-1000): ";
        std::cin >> loanBalance;
    }

    //Prompt for interest rate
    std::cout << "Please enter the interest rate (1.0-100.0 (%)): ";
    std::cin >> interestRate;
    while (interestRate < 1.0 || interestRate > 100.0)
    {
        std::cout << "Interest rate must be between (1.0-100.0)" << std::endl;
        std::cout << "Please enter the interest rate (1.0-100.0 (%)): ";
        std::cin >> interestRate;
    }

    //Additional details
    double interest;
    double newBalance;

    //Formulas
    interest = loanBalance * interestRate;
    newBalance = loanBalance + interest;
    
    //Display first year






}

