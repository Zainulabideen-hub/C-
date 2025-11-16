#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of values (1–1000): ";
    cin >> n;
    int num;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num < 200)
            c1++;
        else if (num < 400)
            c2++;
        else if (num < 600)
            c3++;
        else if (num < 800)
            c4++;
        else
            c5++;
    }
    double p1 = (c1 * 100.0) / n;
    double p2 = (c2 * 100.0) / n;
    double p3 = (c3 * 100.0) / n;
    double p4 = (c4 * 100.0) / n;
    double p5 = (c5 * 100.0) / n;
    cout << int(p1) << "." << int((p1 - int(p1)) * 100 + 0.5) << "%" << endl;
    cout << int(p2) << "." << int((p2 - int(p2)) * 100 + 0.5) << "%" << endl;
    cout << int(p3) << "." << int((p3 - int(p3)) * 100 + 0.5) << "%" << endl;
    cout << int(p4) << "." << int((p4 - int(p4)) * 100 + 0.5) << "%" << endl;
    cout << int(p5) << "." << int((p5 - int(p5)) * 100 + 0.5) << "%" << endl;
    return 0;
}