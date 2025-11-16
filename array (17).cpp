#include <iostream>

using namespace std;

bool changeEnough(int change[], double totalDue) {
    double totalChange = (change[0] * 0.25) +
                         (change[1] * 0.10) +
                         (change[2] * 0.05) +
                         (change[3] * 0.01);
    
    return totalChange >= totalDue;
}

int main() {
    int myChange[4] = {25, 20, 5, 0};
    double due = 4.25;

    cout << boolalpha;
    cout << "Case 1: changeEnough([25, 20, 5, 0], 4.25)" << endl;
    cout << "Result: " << changeEnough(myChange, due) << endl;

    int myChange2[4] = {2, 100, 0, 0};
    double due2 = 10.0;
    
    cout << "\nCase 2: changeEnough([2, 100, 0, 0], 10.0)" << endl;
    cout << "Result: " << changeEnough(myChange2, due2) << endl;

    int myChange3[4] = {1, 0, 20, 0};
    double due3 = 2.0;

    cout << "\nCase 3: changeEnough([1, 0, 20, 0], 2.0)" << endl;
    cout << "Result: " << changeEnough(myChange3, due3) << endl;

    return 0;
}