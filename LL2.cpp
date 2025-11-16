#include<iostream>
using namespace std;

int main()
{
    int n,number=0,pre=1,next;
    cout << "Enter the length of Fibonacci sequence" << endl;
    cin >> n;
    if (n==1)
    {cout << "0" << endl;
    }
    if (n==2) 
    {cout << "0 1" << endl;
    }
    else
    { cout << "0 1";
    for (int i=3;i<=n;i++)
    { next = pre + number;
    number = pre;
    pre = next;
    cout << " " << next;
    }
    }
    return 0;
}