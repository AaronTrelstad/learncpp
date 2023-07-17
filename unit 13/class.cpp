#include <iostream>

class Date {
    public:
        int year;
        int month;
        int day;

        void print() {
            std::cout << month << '/' << day << '/' << year << '\n';
        }
};

int main() {
    Date today = {2023, 7, 16};

    today.day = 17;
    today.print();
    return 0;
}
