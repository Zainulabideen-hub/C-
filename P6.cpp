#include <iostream>
using namespace std;

int main() {
    int speed;

    cout << "Enter the speed: ";
    cin >> speed;

    if (speed <= 10)
        cout << "slow" << endl;

    if (speed > 10 && speed <= 50)
        cout << "average" << endl;

    if (speed > 50 && speed <= 150)
        cout << "fast" << endl;

    if (speed > 150 && speed <= 1000)
        cout << "ultra fast" << endl;

    if (speed > 1000)
        cout << "extremely fast" << endl;

    return 0;
}