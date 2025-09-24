/*Autumn Cummo
* Lab1
* COSC 1436 Fall 2025
*/
#include <iostream>
#include <string>
#include <iomanip>

int main()
{

    std::cout << "Autumn Cummo" << std::endl;
    std::cout << "Lab1" << std::endl;
    std::cout << "COSC 1436 Fall 2025" << std::endl << std::endl;

    std::cout << "Enter your name: ";
    
    std::string name;
    std::cin >> name;

    int lab1, lab2, lab3, lab4;
    std::cout << "Enter lab 1: ";
    std::cin >> lab1;
    std::cout << "Enter lab 2: ";
    std::cin >> lab2;
    std::cout << "Enter lab 3: ";
    std::cin >> lab3;
    std::cout << "Enter lab 4: ";
    std::cin >> lab4;

    int exam1, exam2, exam3;
    std::cout << "Enter exam 1: ";
    std::cin >> exam1;
    std::cout << "Enter exam 2: ";
    std::cin >> exam2;
    std::cout << "Enter exam 3: ";
    std::cin >> exam3;

    int participation;
    std::cout << "Enter participation: ";
    std::cin >> participation;

    int finalExam;
    std::cout << "Enter final exam: ";
    std::cin >> finalExam;
    std::cout << std::endl;

    std::cout << name << ", your lab grades are: " << std::endl;
    std::cout << "lab 1 = " << lab1 << std::endl;
    std::cout << "Lab 2 = " << lab2 << std::endl;
    std::cout << "Lab 3 = " << lab3 << std::endl;
    std::cout << "Lab 4 = " << lab4 << std::endl << std::endl;

    std::cout << name << ", your exam grades are: " << std::endl;
    std::cout << "Exam 1 = " << exam1 << std::endl;
    std::cout << "Exam 2 = " << exam2 << std::endl;
    std::cout << "Exam 3 = " << exam3 << std::endl << std::endl;

    std::cout << name << ", your other grades are: " << std::endl;
    std::cout << "Participation = " << participation << std::endl;
    std::cout << "Final Exam = " << finalExam << std::endl << std::endl;


    std::cout << name << ", your class grade is: " << std::endl;
    double labAverage = (lab1 + lab2 + lab3 + lab4) / 4.0;
    std::cout << std::setprecision(2);
    std::cout << "Lab Average (65%) = " << labAverage << "%" << std::endl;

    double examAverage = (exam1 + exam2 + exam3) / 3.0;
    std::cout << std::setprecision(2);
    std::cout << "Exam Average (20%) = " << examAverage << "%" << std::endl;

    std::cout << "Participation (5%) = " << participation << "%" << std::endl;

    std::cout << "Final Exam (10%) = " << finalExam << "%" << std::endl;

    double classAverage = (labAverage * 0.65) + (examAverage * 0.20) + (participation * 0.05) + (finalExam * 0.10);
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Class Average = " << classAverage << "%" << std::endl;



}
