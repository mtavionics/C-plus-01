// a1_1.cpp
// Assignment 1.1 (Basics Review)
// Class CS 110B Programming Fundamentals: C++
// Author: Mikhail Terentev

/* Write a program that asks the user to enter a date in the format specified above(month / day / 2 - digit - year).
The program should then determine whether the month times the day is equal to the year.
If so, it should display a message saying the date is magic.Otherwise it should display a message saying the date is not magic. */

#include <iostream>
using namespace std;

int main()
{
    // Variables:
    int day;
    int month;
    int year;
    char slash;
    
    // Message:
    cout << "Please enter a date in the format: month/day/2-digit-year (for example, 07/25/65): " << endl;
    cin >> day >> slash >> month >> slash >> year;

    // Checking:
    if (month * day == year)
    {
        cout << "That is magic date!";
    }
    else
    {
        cout << "The date is not magic!";
    }
}

/* 
Output: 
Please enter a date in the format: month/day/2-digit-year (for example, 07/25/65):
05/10/50
That is magic date!


Please enter a date in the format: month/day/2-digit-year (for example, 07/25/65):
06/21/54
The date is not magic!
*/
