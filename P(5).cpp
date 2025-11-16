#include <iostream>
using namespace std;
int main()
{
    char serviceType, timeType;
    double minutes, dayMins, nightMins, charge = 0;
    cout << "Enter which type of customer you are (Regular or Premium) select (r/p): ";
    cin >> serviceType;
    if (serviceType == 'r' || serviceType == 'R')
    {
        cout << "Enter number of minutes you used the service: ";
        cin >> minutes;

        charge = 10.00;
        if (minutes > 50)
            charge == 10.00 + (minutes - 50) * 0.20;

        cout << "The charges are : " << charge << "$" << endl;
    }
    else if (serviceType == 'p' || serviceType == 'P')
    {
        cout << "(Press 'D' for day time or Press 'N' for night time) calls: ";
        cin >> timeType;
        cout << "Enter number of minutes you used the service: ";
        cin >> minutes;
        charge = 25.00;
        if (timeType == 'D' || timeType == 'd')
        {
            if (minutes > 75)
                charge == 25.00 + (minutes - 75) * 0.10;
        }
        else if (timeType == 'N' || timeType == 'n')
        {
            if (minutes > 100)
                charge == 25.00 + (minutes - 100) * 0.05;
        }
        else
        {
            cout << "Invalid input for time type!" << endl;
        }

        cout << "The charges are : " << charge << "$" << endl;
    }
    else
    {
        cout << "Invalid service type!" << endl;
    }
    return 0;
}