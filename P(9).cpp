#include <iostream>

using namespace std;

void process_case() {
    int h, x, y;

    if (!(cin >> h >> x >> y)) {
        return;
    }

    int result = 0;

    if (x < 0 || x > 2 * h || y < 0 || y > 4 * h) {
        result = 2;
    }

    if (result == 0) {
        if (x > 0 && x < h && y > 2 * h && y < 4 * h) {
            result = 2;
        }
    }

    if (result == 0) {
        if (x == 0 || x == 2 * h || y == 0 || y == 4 * h) {
            result = 1;
        }

        if (result == 0 && x == h && y > 2 * h && y < 4 * h) {
            result = 1;
        }

        if (result == 0 && y == 2 * h && x > 0 && x < h) {
            result = 1;
        }

        if (result == 0 && x == h && y == 2 * h) {
            result = 1;
        }
    }

    if (result == 0) {
        cout << "Inside" << endl;
    } else if (result == 1) {
        cout << "Border" << endl;
    } else {
        cout << "Outside" << endl;
    }
    return 0;
}
