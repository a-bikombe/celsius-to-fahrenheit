/*
Student Name: Arianna Bikombe
Date: February 11, 2021
Course: CSCI175N
Lab Assignment: Lab02-01CelsiusToFahrenheit
Project Name: Celsius To Fahrenheit
File Name: Lab02-01CelsiusToFahrenheit.cpp
Description: Converts a given temperature from Centigrade to Fahrenheit
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
using namespace std;

int main() {

    // Local variable declarations placed here
    double tempInCentigrade;
    double tempInFahrenheit;

    // Print out your name and course
    cout << "Arianna Bikombe" << endl;
    cout << "CSCI175N\n" << endl;

    // Inform user what program does
    cout << "This program converts from ";
    cout << "Centigrade to Fahrenheit.\n" << endl;

    // Configure to print only 1 decimal place
    cout.setf(ios::fixed);    // Set cout to fixed point notation
    cout.setf(ios::showpoint);    // Set to display the decimal point
    cout.precision(1);    // Set to 1 place eg: ".x"

    // Prompt user to enter data needed by the program
    cout << "Enter the temperature in Centigrade ";
    cout << "that you wish to convert: " << flush;
    cin >> tempInCentigrade;

    // Skip extra line
    cout << endl;

    // Centigrade to Fahrenheit formula
    tempInFahrenheit = (9.0 / 5.0) * tempInCentigrade + 32;

    // Program output
    cout << tempInCentigrade << " degrees Centigrade is equal to ";
    cout << tempInFahrenheit << " degrees Fahrenheit.\n" << endl;

    // This code pauses the program so instructor can grade
    system("pause");

    return 0;
}

/*

test 1

Arianna Bikombe
CSCI175N

This program converts from Centigrade to Fahrenheit.

Enter the temperature in Centigrade that you wish to convert: 100

100.0 degrees Centigrade is equal to 212.0 degrees Fahrenheit.

Press any key to continue . . .

*/

/*

test 2

Arianna Bikombe
CSCI175N

This program converts from Centigrade to Fahrenheit.

Enter the temperature in Centigrade that you wish to convert: 0

0.0 degrees Centigrade is equal to 32.0 degrees Fahrenheit.

Press any key to continue . . .

*/

/*

test 3

Arianna Bikombe
CSCI175N

This program converts from Centigrade to Fahrenheit.

Enter the temperature in Centigrade that you wish to convert: -40

-40.0 degrees Centigrade is equal to -40.0 degrees Fahrenheit.

Press any key to continue . . .

*/