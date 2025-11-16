#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int num = 1234;

    do {
        sum = sum + num % 10;
        num = num / 10;
    }
    while (num > 0);

    return 0;
}
