#include <iostream>

using namespace std;

int main()
{
    // Assume 'balance' and 'interestRate' are declared
    double balance = 400.00; // Example value
    double interestRate;

    if (balance > 50000.00)                       //Line 1
        interestRate = 0.07;                      //Line 2
    else if (balance >= 25000.00)                 //Line 3
        interestRate = 0.05;                      //Line 4
    else if (balance >= 1000.00)                  //Line 5
        interestRate = 0.03;                      //Line 6
    else                                          //Line 7
        interestRate = 0.00;                      //Line 8

    cout << "Balance: $" << balance << endl;
    cout << "Interest Rate: " << interestRate * 100 << "%" << endl;

    // Output for balance = 400.00: "Interest Rate: 0%"

    return 0;
}
