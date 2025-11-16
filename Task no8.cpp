#include <iostream>
using namespace std;

int main() {
    double vegPrice, fruitPrice,totalCoins, earnings ;
    int vegKg, fruitKg;
    cout << "Enter vegetables price in coin" << endl;
    cin >> vegPrice ;
    cout << "Enter fruits price in coins" << endl;
    cin >> fruitPrice;
    cout << "Enter Kg of vegetables" << endl;
    cin >> vegKg;
    cout << "Enter Kg of fruits" << endl;
    cin >> fruitKg;
     totalCoins = (vegPrice * vegKg) + (fruitPrice * fruitKg);
     earnings = totalCoins / 1.94;
     cout << "Total earnings in Rps"<<earnings << endl;
    
    return 0;
}