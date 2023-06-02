#include <iostream>
using namespace std;

int getNums() {
    int num;
    cin >> num;

    return num;
}

int add(int x, int y) {
    return x + y;
}

int mult(int x, int y) {
    return x * y;
}

void multiply(int x, int y) {
    cout << "Multiplication = " << mult(x, y) << '\n';
}

int main() {
    cout << "Enter two values:" << '\n';
    int one = getNums();
    int two = getNums();

    int one_plus_two = add(one, two);
    cout << "Addition = " << one_plus_two << '\n';
    multiply(one, two);
}
