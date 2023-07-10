#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int& reference = x;

    cout << x << '\n';
    cout << reference << '\n';
}
