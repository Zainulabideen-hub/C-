//header file
#include <iostream>

using namespace std;

//named constants
const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main()
{
    //declare variables
    int feet, inches;
    int totalInches;
    double centimeters;

    //Statements: Step 1 - Step 7
    cout << "Enter two integers, one for feet and "  //Step 1
         << "one for inches: ";
    cin >> feet >> inches;                           //Step 2
    cout << endl;

    cout << "The numbers you entered are " << feet   //Step 3
         << " for feet and " << inches
         << " for inches. " << endl;

    totalInches = INCHES_PER_FOOT * feet + inches;   //Step 4

    cout << "The total number of inches = "          //Step 5
         << totalInches << endl;

    centimeters = CENTIMETERS_PER_INCH * totalInches; //Step 6

    cout << "The number of centimeters = "           //Step 7
         << centimeters << endl;

    return 0;
}
