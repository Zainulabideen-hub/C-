#include <iostream>

using namespace std;

int countVowels(char str[]) {
    int vowelCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowelCount++;
        }
    }
    return vowelCount;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int count = countVowels(str);

    cout << "Total vowels: " << count << endl;

    return 0;
}