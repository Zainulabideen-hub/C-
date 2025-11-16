//Weight in lbs into Kgs
#include <iostream>
using namespace std;
int main()
{
    float lbs, kgs;
    cout <<"Enter weight in pounds (lbs) = ";
    cin >> lbs;
    kgs = lbs*0.45;
    cout <<"Converted weight in kilograms= "<<kgs;
    return 0;
}