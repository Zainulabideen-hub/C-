#include <iostream>

using namespace std;

int main()
{
    // Assume 'temperature' is declared and has a value
    int temperature = 60; // Example value

    if (temperature >= 50)
        if (temperature >= 80)
            cout << "Good day for swimming." << endl;
        else // This 'else' belongs to the inner 'if (temperature >= 80)'
            cout << "Good day for golfing." << endl;
    else // This 'else' belongs to the outer 'if (temperature >= 50)'
        cout << "Good day to play tennis." << endl;

    // Output for temperature = 60: "Good day for golfing."
    // Output for temperature = 45: "Good day to play tennis."

    return 0;
}
