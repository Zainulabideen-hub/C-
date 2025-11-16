#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //Step 1: Declare variables
    string movieName;
    double adultTicketPrice;
    double childTicketPrice;
    int noOfAdultTicketsSold;
    int noOfChildTicketsSold;
    double percentDonation;
    double grossAmount;
    double amountDonated;
    double netSaleAmount;

    //Step 2: Set formatting for output
    cout << fixed << showpoint << setprecision(2); //Step 2

    //Step 3 & 4: Input movie name
    cout << "Enter the movie name: ";              //Step 3
    getline(cin, movieName);                       //Step 4
    cout << endl;

    //Step 5 & 6: Input adult ticket price and tickets sold
    cout << "Enter the price of an adult ticket: $"; //Step 5
    cin >> adultTicketPrice;                       //Step 6
    cout << endl;

    //Step 7 & 8: Input child ticket price and tickets sold
    cout << "Enter the price of a child ticket: $";  //Step 7
    cin >> childTicketPrice;                       //Step 8
    cout << endl;

    //Step 9 & 10: Input number of adult tickets sold
    cout << "Enter the number of adult tickets "
         << "sold: ";                              //Step 9
    cin >> noOfAdultTicketsSold;                   //Step 10
    cout << endl;

    //Step 11 & 12: Input number of child tickets sold
    cout << "Enter the number of child tickets "
         << "sold: ";                              //Step 11
    cin >> noOfChildTicketsSold;                   //Step 12
    cout << endl;

    //Step 13 & 14: Input percentage of donation
    cout << "Enter the percentage of donation: ";  //Step 13
    cin >> percentDonation;                        //Step 14
    cout << endl << endl;

    //Step 15: Calculate gross amount
    grossAmount = adultTicketPrice * noOfAdultTicketsSold +
                  childTicketPrice * noOfChildTicketsSold; //Step 15

    //Step 16 & 17: Calculate donation and net sale amount
    amountDonated = grossAmount * percentDonation / 100; //Step 16
    netSaleAmount = grossAmount - amountDonated;         //Step 17

    //Step 18: Output results
    // Formatting and Output
    cout << "\t\t\t\t" << "*****************************************" << endl; // Line 1
    cout << setfill('.') << left << setw(35) << "*Movie Name:"
         << right << " " << movieName << " *" << endl;
    cout << setfill('.') << left << setw(35) << "*Adult Tickets Sold:"
         << right << setw(10) << noOfAdultTicketsSold << " *" << endl;
    cout << setfill('.') << left << setw(35) << "*Child Tickets Sold:"
         << right << setw(10) << noOfChildTicketsSold << " *" << endl;
    cout << setfill('.') << left << setw(35) << "*Gross Amount:"
         << right << setw(10) << "$" << grossAmount << " *" << endl;
    cout << setfill('.') << left << setw(35) << "*Percent of Gross Amount Donated:"
         << right << setw(10) << percentDonation << " *" << endl;
    cout << setfill('.') << left << setw(35) << "*Amount Donated:"
         << right << setw(10) << "$" << amountDonated << " *" << endl;
    cout << setfill('.') << left << setw(35) << "*Net Sale:"
         << right << setw(10) << "$" << netSaleAmount << " *" << endl;
    cout << "\t\t\t\t" << "*****************************************" << endl; // Line 2

    return 0;
}
