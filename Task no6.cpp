#include<iostream>
using namespace std;

int main()
{
    int bag,price,area,cost,cover;
    cout << "Enter size of fertilizer bag" << endl;
    cin >> bag;
    cout << "Enter cost of bag:$" << endl;
    cin >> price;
    cout << "Enter area in square feet which can be covered by bag" << endl;
    cin >> area;
    cost=price/bag;
    cover=bag*area;
    cout << "Cost per pound is :$"<<cost << endl;
    cout << "Cost per square feet :$"<<cover << endl;
    
    
    return 0;
}