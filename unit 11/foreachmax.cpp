#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int max = 0;

    for (int number : numbers) {
        if (number > max) {
            max = number;
        }
    }

    cout << max << '\n';
}
