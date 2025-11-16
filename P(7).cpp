#include <iostream>
using namespace std;
int main()
{
    string month;
    int stays;
    double studioPrice, apartmentPrice;
    cout << "Enter month: "<<endl;
    cin >> month;
    cout << "Enter number of stays: "<<endl;
    cin >> stays;
    if (month == "May" || month == "October")
    {
        studioPrice = 50 * stays;
        apartmentPrice = 65 * stays;
        if (stays > 14)
            studioPrice -= studioPrice * 0.30;
        else if (stays > 7)
            studioPrice -= studioPrice * 0.05;
    }
    else if (month == "June" || month == "September")
    {
        studioPrice = 75.20 * stays;
        apartmentPrice = 68.70 * stays;
        if (stays > 14)
            studioPrice -= studioPrice * 0.20;
    }
    else if (month == "July" || month == "August")
    {
        studioPrice = 76 * stays;
        apartmentPrice = 77 * stays;
    }
    else
    {
        cout << "Invalid month" << endl;
        return 0;
    }
    if (stays > 14)
        apartmentPrice -= apartmentPrice * 0.10;

    cout << "Apartment: " << apartmentPrice << "$." << endl;
    cout << "Studio: " << studioPrice << "$." << endl;
    return 0;
}