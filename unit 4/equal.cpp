#include <iostream>
using namespace std;

void start() {
    cout << "Input two numbers to compare:" << '\n';
}

int getNumber() {
    int number;
    cin >> number;

    return number;
}

int isEqual(int a, int b) {
    if (a==b) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    start();
    int number_1 = getNumber();
    int number_2 = getNumber();

    if (isEqual(number_1, number_2)) {
        cout << number_1 << " and " << number_2 << " are equal" << '\n';
    }
    else {
        cout << number_1 << " and " << number_2 << " are not equal" << '\n';
    }
}
