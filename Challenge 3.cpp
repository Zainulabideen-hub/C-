#include<iostream>
using namespace std;

int main()
{
    char ch;
    int n1,n2;
    cout << "Enter first number" << endl;
    cin >> n1;
    cout << "Enter second number" << endl;
    cin >> n2;
    cout << "Enter operator" << endl;
    cin >> ch;
    if(ch=='+')
    cout << "Result=" <<n1-n2<< endl;
    if(ch=='-')
    cout << "Result="<<n1+n2 << endl;
    if(ch=='*')
    cout << "Result="<<n1/n2 << endl;
    if(ch=='/')
    cout << "Result="<<n1*n2 << endl;
    return 0;
}