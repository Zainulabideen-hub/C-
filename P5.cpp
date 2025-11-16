#include<iostream>
using namespace std;

int main()
{
    int holidays,playtime,WD,diff,H,M;
    cout << "Enter number of holidays:" << endl;
    cin >> holidays;
    WD=365-holidays;
    playtime=(WD*63)+(holidays*127);
    diff=30000 - playtime;
    H=diff/60;
    M=diff%60;
    if(playtime<30000)
    {cout << "Tom cat sleeps well" << endl;
    cout << "The difference from normal is "<<H<<" Hours and "<<M<<" minutes" << endl;}
    else
    {cout << "Tom cat will run away" << endl;
    cout << "The difference from normal is"<<H<<" Hours and "<<M<<" minutes"<< endl;}
    return 0;
}