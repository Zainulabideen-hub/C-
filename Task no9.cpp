#include<iostream>
using namespace std;

int main()
{
    int number,Th,H,T,U,rem,sum;
    cout << "Enter 4 digit number" << endl;
    cin >> number;
    Th=number/1000;
    rem=number%1000;
    H=rem/100;
    rem=rem%100;
    T=rem/10;
    U=rem%10;
    sum=Th+T+H+U;
    cout << "Sum of digits:"<<sum << endl;
    
    return 0;
}