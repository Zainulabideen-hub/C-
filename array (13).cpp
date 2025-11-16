#include <iostream>
using namespace std;
int main() {
    const int SIZE = 100;
    char str[SIZE];
    cout << "Enter a string: ";
    cin.getline(str, SIZE);
    for (int i = 0; i < SIZE; i++) {
        str[i]++;
        cout << str[i] ;
    }
    return 0;
}