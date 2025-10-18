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
        std::cout << "ERROR: That is an invalid value" << std::endl;
        std::cout << "Please enter the loan amount: ";
        std::cin >> loanBalance;
    }

    //Prompt for interest rate
    std::cout << "Please enter the interest rate (1.0-100.0 (%)): ";
    std::cin >> interestRate;
    while (interestRate < 1.0 || interestRate > 100.0)
    {
        std::cout << "ERROR: That is an invalid value" << std::endl;
        std::cout << "Please enter the interest rate: ";
        std::cin >> interestRate;
    }

    //Prompt for monthly payment
    std::cout << "How much do you want to pay each month? (0-loan amount): ";
    std::cin >> payment;
    while (payment < 0 || payment > loanBalance)
    {
        std::cout << "ERROR: That is an invalid amount" << std::endl;
        std::cout << "How much do you want to pay each month? ";
        std::cin >> payment;
    }

    //Display first year
         //Header
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setw(10) << std::left << "Month" << std::setw(12) << "Balance"  << std::setw(12) << "Payment"
              << std::setw(12) << "Interest" << std::setw(12) << "New Balance" << std::endl;
    std::cout << std::setw(70) << std::setfill('-') << "" << std::setfill(' ') << std::endl;

         //Variables
    double interest = 0.0;
    double newBalance = loanBalance;
    double totalInterest = 0.0;
    double totalPayments = 0.0;

    for (int month = 1; month <= 12; month++)
    {
         //Month 1 only
        if (month == 1)
        {
            std::cout << std::setw(10) << std::left << month << "$" << std::setw(12) << loanBalance
                      << "$" << std::setw(12) << 0.0 << "$" << std::setw(12) << 0.0 << "$" << std::setw(12) << loanBalance
                      << std::endl;
            continue;
        } 
          //Keeps showing 0 when balance = 0
        if (loanBalance <= 0.0)
        {
            interest = 0.0;
            newBalance = 0.0;
        }
          //Keeps payment from exceeding loan balance
        if (payment > loanBalance)
        {
            payment = loanBalance;
        }
          //Interest and new balance formulas
        interest = (newBalance - payment) * (interestRate / 100.0);
        newBalance = (loanBalance - payment) + interest;

          //Prevents negative balance
        if (newBalance < 0.0)
        {
            newBalance = 0.0;
        }
          //Calculating totals
        totalInterest += interest;
        totalPayments += payment;

          //Months 2-12
        std::cout << std::setw(10) << std::left << month << "$" << std::setw(12) << loanBalance << "$" << std::setw(12) << payment
                  << "$" << std::setw(12) << interest << "$" << std::setw(12) << newBalance << std::endl;

         //Updates balance for the next month
        loanBalance = newBalance;
    }
        //Display totals
    std::cout << std::fixed << std::setprecision(2);
    std::cout << std::setw(10) << std::left << "Total" << std::setw(13) << " " << "$" << std::setw(12) << totalPayments
              << "$" << std::setw(12) << totalInterest << std::setw(12) << " " << std::endl;
}

