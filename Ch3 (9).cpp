//Example: left justification
#include <iostream>                              //Line 1
#include <string>                                //Line 2
#include <iomanip>                               //Line 3

using namespace std;                             //Line 4

int main()                                       //Line 5
{
    string name = "Jessica";                     //Line 6
    double gpa = 3.75;                           //Line 7
    int scholarship = 7850;                      //Line 8
                                                 //Line 9
    cout << "123456789012345678901234567890" << endl; //Line 10
    cout << fixed << showpoint << setprecision(2); //Line 11

    cout << left;                                //Line 12

    cout << setw(10) << name << setw(7) << gpa   //Line 13
         << setw(8) << scholarship << endl;

    cout << setfill('*');                        //Line 14
    cout << setw(10) << name << setw(7) << gpa   //Line 15
         << setw(8) << scholarship << endl;

    cout << setw(10) << name << setfill('#')     //Line 16
         << setw(7) << gpa
         << setw(8) << scholarship << endl;

    // ... (Code continues below, from the second part of the image)

    cout << setw(10) << setfill('@') << name
         << setw(7) << setfill('#') << gpa
         << setw(8) << setfill('^') << scholarship
         << endl;                                //Line 17

    cout << right;                               //Line 18
    cout << setfill(' ');                        //Line 19
    cout << setw(10) << name << setw(7) << gpa   //Line 20
         << setw(8) << scholarship << endl;

    return 0;                                    //Line 21
}                                                //Line 22
