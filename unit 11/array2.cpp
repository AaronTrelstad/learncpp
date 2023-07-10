#include <iostream>
using namespace std;

enum names {
    Tim,
    John,
    Aaron,
    Ben,
    NumberOfNames
};

int main() {
    int testScores[NumberOfNames];
    testScores[Aaron] = 34;
    cout << testScores[Aaron] << '\n';
}
