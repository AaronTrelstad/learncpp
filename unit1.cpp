#include <iostream>
using namespace std;

int getValue() {
    cout << "Enter Value: ";
    int num;
    cin >> num;

    return num;
}

int main() {
    int num1 = getValue();
    int num2 = getValue();

    cout << num1 << " + " << num2 << " = " << num1+num2 << '\n';
    cout << num1 << " - " << num2 << " = " << num1-num2 << '\n';
}
