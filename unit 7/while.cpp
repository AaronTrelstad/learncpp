#include <iostream>
using namespace std;

int main() {
    int x = 0;
    while (x < 10) {
        cout << ((x%2==0) ? "Even" : "Odd") << " " << x << '\n';
        x++;
    }
}
