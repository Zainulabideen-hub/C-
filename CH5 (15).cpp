#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    bool isNegative = false;
    int num;

    cin >> num;

    while (cin && !isNegative) {
        if (num < 0) {
            cout << "Negative number found in the data." << endl;
            isNegative = true;
        } else {
            sum = sum + num;
            cin >> num;
        }
    }

    return 0;
}
