#include <iostream>
using namespace std;
int main() {
    int age;
    double priceWashingMachine;
    int priceToy;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter price of washing machine: ";
    cin >> priceWashingMachine;
    cout << "Enter price of each toy: ";
    cin >> priceToy;
    double savedMoney = 0.0;
    int toyCount = 0;
    double moneyGift = 10.0;
    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) { 
            savedMoney += (moneyGift - 1); 
            moneyGift += 10;               
        } else { 
            toyCount++;
        }
    }
    savedMoney += toyCount * priceToy;
    double difference = savedMoney - priceWashingMachine;
    if (difference >= 0)
        cout << "Yes! " << difference;
    else
        cout << "No! " << -difference;

    return 0;
}