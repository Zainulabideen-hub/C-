#include <iostream>

using namespace std;

void removeVowels(const char* input, char* output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        char c = input[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            output[j] = c;
            j++;
        }
    }
    output[j] = '\0';
}

int main() {
    char str1[] = "Hello World";
    char result1[100];
    removeVowels(str1, result1);
    cout << "Original: " << str1 << endl;
    cout << "Vowels Removed: " << result1 << endl;

    char str2[] = "This is a test sentence.";
    char result2[100];
    removeVowels(str2, result2);
    cout << "\nOriginal: " << str2 << endl;
    cout << "Vowels Removed: " << result2 << endl;

    return 0;
}