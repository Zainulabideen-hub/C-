#include <iostream>
using namespace std;
int main() {
    double money;
    int year;
    cout << "Enter inherited money: ";
    cin >> money;
    cout << "Enter year: ";
    cin >> year;
    int age = 18;
    double spent = 0.0;  

    for (int i = 1800; i <= year; i++) {
        if (i % 2 == 0) {
            spent += 12000;
        } else {
            spent += 12000 + 50 * age;
        }
        age++;
    }
    double diff = money - spent;
    if (diff >= 0)
        cout << "Yes! He will live a carefree life and will have " << diff << " dollars left.";
    else
        cout << "He will need " << -diff << " dollars to survive.";

    return 0;
}