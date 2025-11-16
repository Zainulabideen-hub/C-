#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Assume 'score' is declared and has a value
    int score = 75; // Example value

    if (score >= 90)
        cout << "The grade is A." << endl;
    else if (score >= 80)
        cout << "The grade is B." << endl;
    else if (score >= 70)
        cout << "The grade is C." << endl;
    else if (score >= 60)
        cout << "The grade is D." << endl;
    else
        cout << "The grade is F." << endl;

    // Output for score = 75: "The grade is C."

    return 0;
}
