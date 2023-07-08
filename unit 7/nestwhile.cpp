#include <iostream>
using namespace std;

int getVersion() {
    int version;
    cout << "What version do you want?" << '\n';
    cin >> version;
    return version;
}

int main() {
    int version = getVersion();
    if (version == 1) {
        int outer = 1;
        while (outer <= 5) {
            int inner = 1;
            while (inner <= outer) {
                cout << inner << ' ';
                inner++;
            }
            cout << '\n';
            outer++;
        }
    }
    else if (version == 2) {
        int outer = 5;
        while (outer > 0) {
            int inner = outer;
            while (inner > 0) {
                cout << inner << ' ';
                inner--;
            }
            cout << '\n';
            outer--;
        }
    }
    else {
        int row = 1;
        while (row <= 5) {
            int inner = 5;
            while (inner > 0) {
                if (inner > row) {
                    cout << ' ' << ' ';
                }
                else {
                    cout << inner << ' ';
                }
                inner--;
            }
            cout << '\n';
            row++;
        }
    }
}
