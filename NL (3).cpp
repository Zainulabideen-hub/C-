#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    int doctors = 7;
    int treated = 0;
    int untreated = 0;

    for (int day = 1; day <= days; day++) {
        int patients;
        cout << "Enter number of patients for day " << day << ": ";
        cin >> patients;

        if (day % 3 == 0) {
            if (untreated > treated) {
                doctors++;
            }
        }

        if (patients <= doctors) {
            treated += patients;
        } else {
            treated += doctors;
            untreated += (patients - doctors);
        }
    }

    cout << "Treated patients: " << treated << "." << endl;
    cout << "Untreated patients: " << untreated << "." << endl;

    return 0;
}