#include <iostream>
using namespace std;
int main() {
    int array[10];
    int smallest;
    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> array[i];
    }
    smallest = array[0];
    for (int j = 1; j < 10; j++) {
        if (array[j] < smallest) {
            smallest = array[j];
        }
    }
    cout << "The Smallest Value = " << smallest;
    return 0;
}