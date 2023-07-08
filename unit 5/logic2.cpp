#include <iostream>
using namespace std;

int main() {
    int x = 14;
    int y = 6;

    if (!(x != y)) {
        cout << "x=y" << '\n';
    }

    if ((x+y) > (3*x) || (x+y) > (3*y)) {
        cout << ((x>=y) ? x : y) << '\n';
    }
    else if ((2*x) > y && (x>y)) {
        cout << x << '\n';
    }
    else {
        cout << y << '\n';
    }
}
