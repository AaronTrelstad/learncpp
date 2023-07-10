#include <iostream>
using namespace std;

void add1(int& y) {
    y++;
}

int main() {
    int x = 4;

    cout << x << '\n';

    add1(x);
    add1(x);

    cout << x << '\n';

}
