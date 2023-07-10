#include <iostream>
using namespace std;

int getNumber() {
    cout << "Enter a number\n";
    int number;
    cin >> number;
    if (number == 0) {
        cout << "Please enter a valid number\n";
        return getNumber();
    }
    return number;
}

int getOp(int num1, int num2) {
    cout << "Enter one of the following operations: +, -, *, /" << '\n';
    char operation;
    cin >> operation;

    while (true) {
        switch (operation) {
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                return num1 / num2;
            default:
                cout << "Invalid Operation. Please try again\n";
        }
    }

}


int main() {
    int one = getNumber();
    int two = getNumber();

    cout << getOp(one, two) << '\n';

}
