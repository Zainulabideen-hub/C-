#include<iostream>
using namespace std;

int main()
{
    string name1,name2,name3;
    int age1,age2,age3;
    cout << "Enter first name" << endl;
    cin >> name1;
    cout << "Enter first age" << endl;
    cin >> age1;
    cout << "Enter second name" << endl;
    cin >> name2;
    cout << "Enter second age" << endl;
    cin >> age2;
    cout << "Enter third name " << endl;
    cin >> name3;
    cout << "Enter third age" << endl;
    cin >> age3;
    if(age1<age2)
    {if(age1<age3)
    {cout << name1<< endl;}
    else
   { cout << name3<< endl;}
   }
    else
    {cout << name2 << endl;}
    return 0;
}