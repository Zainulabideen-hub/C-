#include <iostream>
using namespace std;

int main() {
    long long int minutes, fps, totalframes ;
    cout << "Enter minutes" << endl;
    cin >> minutes ;
    cout << "Enter frames" << endl;
    cin >> fps;
     totalframes = minutes * 60 * fps;
     cout << "Total frames per second" << endl;
    cout << totalframes;
    return 0;
}