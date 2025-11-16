#include <iostream>

using namespace std;

char* giveMeSomething(const char* a) {
    static char result[256];
    char prefix[] = "something ";

    int i = 0;
    while (prefix[i] != '\0') {
        result[i] = prefix[i];
        i++;
    }

    int j = 0;
    while (a[j] != '\0') {
        result[i + j] = a[j];
        j++;
    }
    result[i + j] = '\0';
    
    return result;
}

int main() {
    cout << giveMeSomething("is better than nothing") << endl;
    cout << giveMeSomething("Bob Jane") << endl;
    cout << giveMeSomething("something") << endl;

    return 0;
}