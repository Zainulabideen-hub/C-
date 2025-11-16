// MB into Bits
#include <iostream>
using namespace std;
int main()
{
    unsigned long int MB, bits;
    cout <<"Enter size in Megabytes (MB)= ";
    cin >> MB;
    bits = MB*1024*1024*8;
    cout <<"Megabytes Converted in bits= "<<bits;
    return 0;
}