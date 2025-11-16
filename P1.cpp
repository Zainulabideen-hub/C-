#include <iostream>
#include <string>
using namespace std;

int main() {
    string country;
    double price, discount, finalPrice;

    cout << "Enter the country name: ";
    getline(cin, country);
    cout << "Enter the ticket price: ";
    cin >> price;
    if (country == "ireland") {
        discount = 0.10;  
    } else {
        discount = 0.05; 
    }
    finalPrice = price - (price * discount);
    cout << "Discount applied: " << discount * 100 << "%" << endl;
    cout << "Final ticket price after discount: " << finalPrice << endl;
    return 0;
}