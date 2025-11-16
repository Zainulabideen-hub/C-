#include <iostream>

using namespace std;

void insertArray(int arr1[], int arr2[], int size2, int result[]) {
    
    result[0] = arr1[0];

    for (int i = 0; i < size2; i++) {
        result[i + 1] = arr2[i];
    }
    
    result[size2 + 1] = arr1[1];
}

int main() {
    
    int arr1[2] = {10, 20};
    
    const int size2 = 3;
    int arr2[size2] = {1, 2, 3};

    const int resultSize = 2 + size2;
    int result[resultSize];

    insertArray(arr1, arr2, size2, result);

    cout << "Combined array: ";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}