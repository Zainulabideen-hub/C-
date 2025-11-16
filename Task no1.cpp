#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of internal angles" << endl;
    cin >> n;
    int sum = (n - 2) * 180;
    cout << "Sum of all internal angles" << endl;
    cout << sum;
    return 0;
}