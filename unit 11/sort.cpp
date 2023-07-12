#include <iostream>
#include <algorithm>
using namespace std;

/*
the include algorithm allow you to use sort()
*/

int main() {
    int array[] = {3, 6, 1, 2, 9, 4, 10};
    int size = sizeof(array) / sizeof(array[0]);
    sort(begin(array), end(array));
    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
    cout << '\n';
}
