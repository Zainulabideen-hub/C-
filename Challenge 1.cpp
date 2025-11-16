#include<iostream>
using namespace std;

int main()
{
    int bill,dis,disbill;
    cout << "Enter bill:";
    cin >> bill;
    cout<<endl;
    if(bill<=5000)
    {dis=bill*5/100;
    disbill=bill-dis;
    cout << "After 5% discount bill="<<disbill << endl;}
    if(bill>5000)
    {dis=bill*10/100;
    disbill=bill-dis;
    cout << "After 10% discount bill="<<disbill << endl;}
    return 0;
}