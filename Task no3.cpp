#include<iostream>
using namespace std;

int main()
{
    double acc,Vf,Vi,time;
    cout << "Enter acceleration" << endl;
    cin >> acc;
    cout << "Enter time" << endl;
    cin >> time;
    cout << "Enter initial velocity" << endl;
    cin >> Vi;
    Vf=Vi+acc*time;
    cout << "Final velocity:" <<Vf<< endl;
    return 0;
}