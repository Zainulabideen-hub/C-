#include<iostream>
using namespace std;

int main()
{
    int n,s;
    cout << "Enter a number" << endl;
    cin >> n;
    s=n*(n+1)/2;
    cout << "Triangle ("<<n<<")="<<s<< endl;
    
    return 0;
}