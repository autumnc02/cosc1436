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
    double loanBalance;   //Required, 1-1000
    double interestRate;  //Required, 1.0-100.0
    double payment;       //Required, 0-loan amount
   
    //Prompt for initial loan
    std::cout << "Please enter the loan amount ($1-1000): ";
    std::cin >> loanBalance;
    while (loanBalance < 1 || loanBalance > 1000)
    {
        std::cout << "That is an invalid value" << std::endl;
        std::cout << "Please enter the loan amount: ";
        std::cin >> loanBalance;
    }

    //Prompt for interest rate
    std::cout << "Please enter the interest rate (1.0-100.0 (%)): ";
    std::cin >> interestRate;
    while (interestRate < 1.0 || interestRate > 100.0)
    {
        std::cout << "That is an invalid value" << std::endl;
        std::cout << "Please enter the interest rate: ";
        std::cin >> interestRate;
    }

    //Prompt for monthly payment
    std::cout << "How much do you want to pay each month? (0-loan amount): ";
    std::cin >> payment;
    while (payment < 0 || payment > loanBalance)
    {
        std::cout << "That is an invalid amount" << std::endl;
        std::cout << "How much do you want to pay each month? ";
        std::cin >> payment;
    }

    //Display first year
         //Header
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setw(10) << std::left << "Month" << std::setw(12) << "Balance"  
              << std::setw(12) << "Interest" << std::setw(12) << "New Balance" << std::endl;
    std::cout << std::setw(70) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

         //interest and new balance
    double interest = 0.0;
    double newBalance = loanBalance;

    for (int month = 1; month <= 12; month++)
    {
        if (month == 1)
        {
            interest = 0.0;
        } else
        {
            interest = loanBalance * (interestRate / 100.0);
        }
        newBalance = loanBalance + interest;

        std::cout << std::setw(10) << std::left << month << "$" << std::setw(12) << loanBalance
                  << "$" << std::setw(12) << interest << "$" << std::setw(12) << newBalance << std::endl;

        loanBalance = newBalance;
    }

        
      
}

