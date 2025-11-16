#include <iostream> //Line 1
using namespace std; //Line 2
int main() //Line 3
{ //Line 4
 double gpa;
 cout << "Enter the GPA: "; //Line 6
 cin >> gpa; //Line 7
 cout << endl; //Line 8
 if (gpa >= 2.0) //Line 9
 { //Line 10
 if (gpa >= 3.9) //Line 11
 cout << "Dean\'s Honor List." << endl; //Line 12
 } //Line 13
 else //Line 14
 cout << "The GPA is below the graduation "
 << "requirement. \nSee your "
 << "academic advisor." << endl; //Line 15
 return 0; //Line 16
}