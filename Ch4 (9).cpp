#include <iostream>

using namespace std;

int main()
{
    // Assume 'age' is declared and has a value
    int age = 19; // Example value

    if (age >= 18)
    {
        cout << "Eligible to vote." << endl;
        cout << "No longer a minor." << endl;
    }
    else
    {
        cout << "Not eligible to vote." << endl;
        cout << "Still a minor." << endl;
    }

    // Output for age = 19:
    // Eligible to vote.
    // No longer a minor.

    return 0;
}
