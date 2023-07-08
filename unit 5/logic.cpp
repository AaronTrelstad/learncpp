#include <iostream>
using namespace std;

void start() {
    cout << "Enter two numbers" << '\n';
}

int getNums() {
    int number;
    cin >> number;

    return number;
}

int main() {
    start();
    int one = getNums();
    int two = getNums();

    one++;
    two--;

    int x = ((one >= two) ? one : two);
    int y = ((one <= two) ? one : two);

    cout << ((x != y) ? x : y);
}
