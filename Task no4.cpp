#include <iostream>
using namespace std;

int main() {
    int i, p;
    cout << "Enter number of imposters" << endl;
    cin >> i ;
    cout << "Enter number of players" << endl;
    cin >> p;
    int chance = (100 * i) / p;
    cout <<"Chance of imposter:" << chance << "%";
    return 0;
}