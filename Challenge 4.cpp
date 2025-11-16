#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character" << endl;
    cin >> ch;
    if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {cout << "Vowel" << endl;}
    else
    {cout << "Constant" << endl;}
    if(ch=='0'|| ch=='1'|| ch=='2'|| ch=='3'|| ch=='4'|| ch=='5'|| ch=='6'|| ch=='7'|| ch=='8'|| ch=='9')
    {cout << "Number" << endl;}
    return 0;
}