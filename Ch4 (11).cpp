#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Assume 'month' is declared and has a value
    int month = 4; // Example value

    if (month == 1)
        cout << "January" << endl;
    else if (month == 2)
        cout << "February" << endl;
    else if (month == 3)
        cout << "March" << endl;
    else if (month == 4)
        cout << "April" << endl;
    else if (month == 5)
        cout << "May" << endl;
    else if (month == 6)
        cout << "June" << endl;
    // An 'else' could be added here for months 7-12 or invalid input

    // Output for month = 4: "April"

    return 0;
}
