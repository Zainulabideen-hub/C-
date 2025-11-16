// Finding Current (I)
#include <iostream>
using namespace std;
int main()
{
    float Q, t, I;
    cout <<"Enter charge (Q): ";
    cin >> Q;
    cout <<"Enter time (t): ";
    cin >> t;
    I = Q/t;
    cout <<"Current (I) = "<<I<<"A";
    return 0;
}