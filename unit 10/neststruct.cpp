#include <iostream>
using namespace std;

struct Employee {
    int age;
    int level;
    double salary;
};

struct Company {
    int employees;
    Employee CEO;
};

int main() {
    Company johndeere = { 70000, {52, 20, 200000}};
    cout << johndeere.CEO.salary << '\n';
}
