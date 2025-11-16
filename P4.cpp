#include <iostream>
using namespace std;

int main() {
    int redRoses, whiteRoses, tulips;
    double totalPrice, discountedPrice;
    double redPrice = 2.0;
    double whitePrice = 4.10;
    double tulipPrice = 2.50;
    cout << "Enter number of red roses: ";
    cin >> redRoses;
    cout << "Enter number of white roses: ";
    cin >> whiteRoses;
    cout << "Enter number of tulips: ";
    cin >> tulips;
    totalPrice = (redRoses * redPrice) + (whiteRoses * whitePrice) + (tulips * tulipPrice);
    cout << "Original Price: $" << totalPrice << endl;
    if (totalPrice > 200) {
        discountedPrice = totalPrice - (totalPrice * 0.20);
        cout << "Discount Applied: 20%" << endl;
        cout << "Total Payable Amount after Discount: $" << discountedPrice << endl;
    } else {
        cout << "No discount applied." << endl;
        cout << "Total Payable Amount: $" << totalPrice << endl;
    }

    return 0;
}