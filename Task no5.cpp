#include<iostream>
using namespace std;

int main()
{
    string name;
    int weight,days;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter amount of weight you want to lose" << endl;
    cin >> weight;
    days=weight*15;
    cout << "Number of days to lose weight:"<< days << endl;
    return 0;
}