// Calcuation of Population After 3 Decades
#include <iostream>
using namespace std;
int main()
{
    long int current_popl, n, total_popl;
    int decades = 3;
    int months = decades*12;
    cout <<"Enter world's current population= ";
    cin >> current_popl;
    cout <<"Enter number of births per month= ";
    cin >> n;
    total_popl = current_popl+(n*months);
    cout << "World's population after "<<decades<<" decades,When spaceship is ready: "<<total_popl;
    return 0;
}