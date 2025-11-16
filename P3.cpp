#include<iostream>
using namespace std;

int main()
{
    double temp1,temp2,diff;
    cout << "Enter 1st temperature" << endl;
    cin >> temp1;
    cout << "Enter 2nd temperature" << endl;
    cin >> temp2;
    diff=temp1-temp2;
    if(diff>10)
    {cout << "Difference is too Big" << endl;}
    return 0;
}