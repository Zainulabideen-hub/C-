//Aggregate Calculation 
#include <iostream>
using namespace std;
int main()
{
    string name;
    float matric, inter, ecat, aggregate;
    cout <<"Enter Your Name: ";
    cin >> name;
    cout <<"Enter Matric marks = ";
    cin >> matric;
    cout <<"Enter Intermediate marks = ";
    cin >> inter;
    cout <<"Enter ECAT marks = ";
    cin >> ecat;
    aggregate =(ecat/400*50)+(inter/560*40)+(matric/1100*10);
    cout <<"Your Aggregate: "<<aggregate<<"%";
    return 0;
}