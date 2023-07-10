#include <iostream>
using namespace std;

struct Student {
    int grade;
    double gpa;
    int act;
};

void printStudent(const Student& student) {
    cout << "Grade: " << student.grade << '\n';
    cout << "GPA: " << student.gpa << '\n';
    cout << "ACT: " << student.act << '\n';
};

int main() {
    Student jim = { 12, 3.8, 32}; 
    Student mark = { 11, 3.9, 34 };

    if (mark.gpa > jim.gpa && mark.act > jim.act) {
        cout << "Mark is a better student than Jim" << '\n';
        printStudent(mark);
    }
    else if (mark.gpa < jim.gpa && mark.act < jim.act) {
        cout << "Jim is a better student than Mark" << '\n';
        printStudent(jim);
    }
    else {
        cout << "Jim and Mark are equal" << '\n';
    }
}
