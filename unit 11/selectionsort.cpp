#include <iostream>
using namespace std;

int main() {
    int array[] = {2, 5, 1, 4, 9, 6};
    int arraySize = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < arraySize-1; i++) {
        int min = i;
        for (int j = i + 1; j < arraySize; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        swap(array[min], array[i]);
    }

    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << ", ";
    }

    cout << '\n';
}
