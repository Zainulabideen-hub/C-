#include<iostream>
using namespace std;

int main()
{
    int array[10];
    for (int i = 0;i<10;i++)
    {
     cout << "Enter the values" << endl;
     cin >> array[i];
     }
     for (int j=9;j>=0;j--)
     {
     cout << array[j] << endl;}
    return 0;
}