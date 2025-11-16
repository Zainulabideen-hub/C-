#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants for residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

// Named constants for business customers
const double BUS_BILL_PROC_FEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main()
{
    // Variable declaration
    int accountNumber;
    char customerType;
    int numOfPremChannels;
    int numOfBasicServConn;
    double amountDue;

    // Step 1: Set formatting
    cout << fixed << showpoint;                       //Step 1
    cout << setprecision(2);                          //Step 1

    cout << "This program computer a cable *"
         << "company bill." << endl << endl;

    // Step 2 & 3: Input account number
    cout << "Enter account number (an integer): ";   //Step 2
    cin >> accountNumber;                             //Step 3
    cout << endl;

    // Step 4 & 5: Input customer type
    cout << "Enter customer type: *"
         << "R or r (Residential), *"
         << "B or b (Business): ";                    //Step 4
    cin >> customerType;                              //Step 5
    cout << endl;

    switch (customerType)
    {
        case 'r':
        case 'R':
            // Step 6: Residential Billing
            cout << "Enter the number"
                 << " of premium channels: ";         //Step 6
            cin >> numOfPremChannels;                 //Step 6a
            cout << endl;

            amountDue = RES_BILL_PROC_FEES
                      + RES_BASIC_SERV_COST
                      + numOfPremChannels * RES_COST_PREM_CHANNEL; //Step 6b

            // Step 6c, 6d: Output results
            cout << "Account number: " << accountNumber << endl; //Step 6c
            cout << "Customer type: Residential" << endl;
            cout << "Amount due: $" << amountDue                  //Step 6d
                 << endl << endl;

            break;

        case 'b':
        case 'B':
            // Step 7: Business Billing
            cout << "Enter the number of basic *"
                 << "service connections: ";          //Step 7a
            cin >> numOfBasicServConn;                //Step 7a
            cout << endl;

            cout << "Enter the number"
                 << " of premium channels: ";         //Step 7b
            cin >> numOfPremChannels;                 //Step 7c
            cout << endl;

            if (numOfBasicServConn <= 10)
                amountDue = BUS_BILL_PROC_FEES
                          + BUS_BASIC_SERV_COST
                          + numOfPremChannels * BUS_COST_PREM_CHANNEL; //Step 7d
            else
                amountDue = BUS_BILL_PROC_FEES
                          + BUS_BASIC_SERV_COST
                          + (numOfBasicServConn - 10) * BUS_BASIC_CONN_COST
                          + numOfPremChannels * BUS_COST_PREM_CHANNEL; //Step 7e

            // Step 7f, 7g: Output results
            cout << "Account number: " << accountNumber << endl; //Step 7f
            cout << "Customer type: Business" << endl;
            cout << "Amount due: $" << amountDue                  //Step 7g
                 << endl << endl;

            break;

        default:
            // Step 8: Invalid input
            cout << "Invalid customer type." << endl;  //Step 8
            break;
    } //end switch

    return 0;
}
