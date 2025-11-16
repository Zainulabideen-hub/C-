#include <iostream>

using namespace std;

int main()
{
    // Assume 'temperature' is declared and has a value
    int temperature = 75; // Example value

    if (temperature >= 70)
        if (temperature >= 80)
            cout << "Good day for swimming." << endl;
        else // This 'else' belongs to the inner 'if (temperature >= 80)'
            cout << "Good day for golfing." << endl;

    // Output for temperature = 75: "Good day for golfing."
    // Output for temperature = 85: "Good day for swimming."
    // Output for temperature = 65: (No output, as the outer 'if' is false)

    return 0;
}
