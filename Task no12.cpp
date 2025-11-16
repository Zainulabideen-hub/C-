#include<iostream>
using namespace std;

int main()
{
    int n,w,h,area,walls;
    cout << "Enter number of square meters you can paint" << endl;
    cin >> n;
    cout << "Enter width of wall" << endl;
    cin >> w;
    cout << "Enter length of wall" << endl;
    cin >> h;
    area=w*h;
    walls=n/area;
    cout << "Number of walls you can paint:"<<walls << endl;
    
    return 0;
}