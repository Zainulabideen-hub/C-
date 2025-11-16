#include <iostream>
using namespace std;
int main() {
    int num, digit, count = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit to find its frequency: ";
    cin >> digit;
    int temp = num;
    while (temp != 0) {
        int lastDigit = temp % 10;
        if (lastDigit == digit)
            count++;
        temp = temp / 10;
    }
    cout << "Frequency of " << digit << " in " << num << " is: " << count;
    return 0;
}