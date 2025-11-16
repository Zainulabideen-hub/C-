#include <iostream>

using namespace std;

int main()
{
    // Assume 'gender', 'age', and 'policyRate' are declared
    char gender = 'F'; // Example value
    int age = 25;      // Example value
    double policyRate;

    if (gender == 'M')
        if (age < 21)
            policyRate = 0.05;
        else
            policyRate = 0.35;
    else if (gender == 'F')
        if (age < 21)
            policyRate = 0.04;
        else
            policyRate = 0.30;
    // An 'else' could be added here for invalid gender input

    cout << "Gender: " << gender << ", Age: " << age << endl;
    cout << "Policy Rate: " << policyRate << endl;

    // Output for gender = 'F', age = 25: "Policy Rate: 0.3"

    return 0;
}
