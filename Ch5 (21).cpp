#include <iostream>

using namespace std;

int main() {
    int score;

    do {
        cout << "Enter a score between 0 and 50: ";
        cin >> score;
        cout << endl;
    }
    while (score < 0 || score > 50);

    return 0;
}
