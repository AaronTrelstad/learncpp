#include <iostream>
using namespace std;

int main() {
    int numRows = 10;
    int numCols = 10;

    int matrix[numRows][numCols];

    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= numCols; j++) {
            matrix[i-1][j-1] = i * j;
        }
    }

    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= numCols; j++) {
            cout << matrix[i-1][j-1] << '\t';
        }
        cout << '\n';
    }

    return 0;
}
