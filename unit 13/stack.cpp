#include <iostream>
#include <vector>

template <typename T>
class Stack {
    private:
        std::vector<T> array;

    public: 
        bool isEmpty() {
            return array.empty();
        }

        void push(int value) {
            array.push_back(value);
            std::cout << "Pushed element: " << value << '\n';
        }

        void pop() {
            if (isEmpty()) {
                std::cout << "Cannot Pop, Stack is empty" << '\n';
                return;
            }

            T value = array.back();
            array.pop_back();
            std::cout << "Popped element: " << value << '\n';
        }
};

int main() {
    Stack<int> stack;

    stack.push(4);
    stack.push(5);
    stack.pop();

    return 0;
}
