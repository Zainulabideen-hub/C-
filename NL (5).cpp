#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number of integers: ";
    cin >> n;

    int count2 = 0, count3 = 0, count4 = 0;

    for (int i = 1; i <= n; i++) {
        int num;
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num % 2 == 0) count2++;
        if (num % 3 == 0) count3++;
        if (num % 4 == 0) count4++;
    }

    cout << fixed << setprecision(2);
    cout << (count2 * 100.0 / n) << "%" << endl;
    cout << (count3 * 100.0 / n) << "%" << endl;
    cout << (count4 * 100.0 / n) << "%" << endl;

    return 0;
}