#include <iostream>

using namespace std;

double calculateTotalResistance(double arr[], int size) {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    const int MAX_SIZE = 100;
    double resistances[MAX_SIZE];
    int count;

    cout << "Enter how many resistors: ";
    cin >> count;

    if (count > MAX_SIZE) {
        count = MAX_SIZE;
        cout << "Using max size of " << MAX_SIZE << endl;
    } else if (count <= 0) {
        cout << "No resistors to sum." << endl;
        return 0;
    }

    cout << "Enter each resistance value (in ohms):" << endl;
    for (int i = 0; i < count; i++) {
        cout << "Resistor " << i + 1 << ": ";
        cin >> resistances[i];
    }

    double totalResistance = calculateTotalResistance(resistances, count);

    cout << "Total resistance: " << totalResistance << " ohms" << endl;

    return 0;
}