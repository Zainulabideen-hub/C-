#include<iostream>
using namespace std;

int main()
{
    string movie;
    int adult,child,adultsold,childsold,sum, percentage, charity , remaining;
    cout << "Enter movie name" << endl;
    cin >> movie;
    cout << "Adult ticket price:$" << endl;
    cin >> adult;
    cout << "Child ticket price:$" << endl;
    cin >> child;
    cout << "Enter number of adult tickets sold" << endl;
    cin >> adultsold;
    cout << "Enter number of children tickets sold" << endl;
    cin >> childsold;
    sum=adult*adultsold+child*childsold;
    cout << "Enter percentage you want to donate charity" << endl;
    cin >> percentage;
    charity=sum*percentage/100;
    cout << "Amount to donate:$" <<charity<< endl;
    remaining=sum-charity;
    cout << "Remaining amount:&"<<remaining << endl;
    
    return 0;
}