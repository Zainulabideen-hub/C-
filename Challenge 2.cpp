#include<iostream>
using namespace std;

int main()
{
    int adv,months,amount;
    cout << "Enter amount of advanced salary per month" << endl;
    cin >> adv;
    cout << "Enter number of months you are taking advance" << endl;
    cin >> months;
    amount=adv*months;
    if(amount<50000)
    {cout << "You can't buy laptop" << endl;
    cout << "You must take 10 months advanced salary to buy laptop" << endl;
    }
    return 0;
}