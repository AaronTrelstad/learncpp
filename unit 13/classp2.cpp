#include <iostream>

class DateClass {
    int monthClass;
    int dayClass;
    int yearClass;

    public:
        void setDate(int month, int day, int year) {
            monthClass = month;
            dayClass = day;
            yearClass = year;
        }

        void print() {
            std::cout << monthClass << '/' << dayClass << '/' << yearClass << '\n';
        }
};

int main() {
    DateClass date;
    date.setDate(7, 18, 23);
    date.print();
    return 0;
}
