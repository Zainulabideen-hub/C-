#include <iostream>
using namespace std;

int main()
{
    char temp, hum; 
    cout << "Enter temperature (W for Warm, C for Cold): ";
    cin >> temp;
    cout << "Enter humidity (D for Dry, H for Humid): ";
    cin >> hum;
    if (temp == 'W') {
        if (hum == 'D')
            cout << "Play tennis" << endl;
        else
            cout << "Swim" << endl;
    }
    else if (temp == 'C') {
        if (hum == 'D')
            cout << "Play basketball" << endl;
        else
            cout << "Watch TV" << endl;
    }
    else {
        cout << "Invalid input!" << endl;
    }

    return 0;
}