#include <iostream>
using namespace std;
int main() {
 int num;
 cout << "Enter the length of series" << endl;
 cin >> num;
 for (int i = 1; i <= num; i++) {
 if (i % 4 == 0)
 cout << i * 10 << " ";
 else
 cout << i << " ";
    }
    return 0;
}