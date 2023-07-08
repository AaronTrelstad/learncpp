#include <iostream>
using namespace std;

int getNumber() {
    int number;
    cout << "Enter either 1, 2, 3" << '\n';
    cin >> number;
    return number;
}

void printNumber(int x) {
    switch(x) {
        case 1:
            cout << "One" << '\n';
            break;
        case 2:
            cout << "Two" << '\n';
            break;
        case 3:
            cout << "Three" << '\n';
            break;
        default:
            printNumber(getNumber());
            return;
    }
    cout << ((x % 2 == 0) ? "Even" : "Odd");
    cout << '\n';
}

int main() {
    printNumber(getNumber());
}
