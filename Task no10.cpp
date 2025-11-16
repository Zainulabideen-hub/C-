#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,add,sub,mul,sum,total;
    cout << "Enter first number" << endl;
    cin >> n1;
    cout << "Enter second number" << endl;
    cin >> n2;
    cout << "Enter third number" << endl;
    cin >> n3;
    cout << "Enter forth number" << endl;
    cin >> n4;
    cout << "Enter fifth number" << endl;
    cin >> n5;
    cout << "Enter sixth number" << endl;
    cin >> n6;
    cout << "Enter seventh number" << endl;
    cin >> n7;
    cout << "Enter eighth number" << endl;
    cin >> n8;
    cout << "Enter ninth number" << endl;
    cin >> n9;
    cout << "Enter tenth number" << endl;
    cin >> n10;
    cout << "Enter eleventh number" << endl;
    cin >> n11;
    cout << "Enter twelvth number" << endl;
    cin >> n12;
    cout << "Enter thirteenth number" << endl;
    cin >> n13;
    cout << "Enter fourteenth number" << endl;
    cin >> n14;
    cout << "Enter fifteenth number" << endl;
    cin >> n15;
    add=n1+n2+n3+n4+n5;
    mul=n6*n7*n8*n9*n10;
    sub=n11-n12-n13-n14-n15;
    sum=add+mul;
    total=sum-sub;
    cout << "Final result:"<<total << endl;
    return 0;
}