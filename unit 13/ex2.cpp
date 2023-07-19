#include <iostream>

class Example {
    int m_x;
    int m_y;
    int m_z;

    public:
        void setValues(int x, int y, int z) {
            m_x = x;
            m_y = y;
            m_z = z;
        }

        void print() {
            std::cout << '<' << m_x << ", " << m_y << ", " << m_z << '>' << '\n';
        }
};

int main() {
    Example test;
    test.setValues(2, 3, 4);
    test.print();
    return 0;
}
