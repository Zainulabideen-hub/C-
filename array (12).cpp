#include <iostream>
using namespace std;

int main() {
    char str[] = "hello";

    cout << "Original string: " << str << endl;
    cout << "Reversed string: ";

    for (int i = 4; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    return 0;
}