#include <iostream>

using namespace std;

int main() {
    int i = 11;

    do {
        cout << i << " ";
        i = i + 5;
    }
    while (i <= 10);

    cout << endl;

    return 0;
}
