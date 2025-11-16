// Convert Hours into Seconds
#include <iostream>
using namespace std;
int main()
{
    unsigned long int hours, seconds;
    cout <<"Enter time in hours= ";
    cin >> hours;
    seconds = hours*3600;
    cout <<"Equivalent time in seconds= "<<seconds;
    return 0;
}