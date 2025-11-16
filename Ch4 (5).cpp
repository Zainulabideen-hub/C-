#include <iostream>

using namespace std;

int main()
{
    // Assume 'balance' and 'interestRate' are declared
    double balance = 30000.00; // Example value
    double interestRate;

    if (balance > 50000.00)                        //Line 1
        interestRate = 0.07;                       //Line 2
    else                                           //Line 3
        if (balance >= 25000.00)                   //Line 4
            interestRate = 0.05;                   //Line 5
        else                                       //Line 6
            if (balance >= 1000.00)                //Line 7
                interestRate = 0.03;               //Line 8
            else                                   //Line 9
                interestRate = 0.00;               //Line 10

    cout << "Balance: $" << balance << endl;
    cout << "Interest Rate: " << interestRate * 100 << "%" << endl;

    // Output for balance = 30000.00: "Interest Rate: 5%"

    return 0;
}
