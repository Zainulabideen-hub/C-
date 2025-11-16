#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number of cargo: ";
    cin >> n;

    double minibusTons = 0, truckTons = 0, trainTons = 0, totalTons = 0;

    for (int i = 1; i <= n; i++) {
        double tons;
        cout << "Enter tons for cargo " << i << ": ";
        cin >> tons;
        totalTons += tons;

        if (tons <= 3)
            minibusTons += tons;
        else if (tons <= 11)
            truckTons += tons;
        else
            trainTons += tons;
    }

    double totalCost = (minibusTons * 200) + (truckTons * 175) + (trainTons * 120);
    double avgPrice = totalCost / totalTons;

    cout << fixed << setprecision(2);
    cout << "Average price per ton: " << avgPrice << endl;
    cout << "Percentage by minibus: " << (minibusTons / totalTons * 100) << "%" << endl;
    cout << "Percentage by truck: " << (truckTons / totalTons * 100) << "%" << endl;
    cout << "Percentage by train: " << (trainTons / totalTons * 100) << "%" << endl;

    return 0;
}