// Calculate Power in watts
#include <iostream>
using namespace std;
int main()
{
    float volt, current, pow;
    cout <<"Enter voltage (V) = ";
    cin >> volt;
    cout <<"Enter current (A) = ";
    cin >> current;
    pow = volt*current;
    cout <<"Power = "<<pow<<" watts";
    return 0;
}