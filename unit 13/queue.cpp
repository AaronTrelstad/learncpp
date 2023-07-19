#include <iostream>
#include <vector>

template <typename T>
class Queue {
    private:
        std::vector<T> array;

    public:
        bool isEmpty() {
            return array.empty();
        }

        void enqueue(int value) {
            array.push_back(value);
            std::cout << "Enqueued element: " << value << '\n';
        }

        void dequeue() {
            if (isEmpty()) {
                std::cout << "Queue is Empty" << '\n';
                return;
            }

            T value = array.front();
            array.erase(array.begin());
            std::cout << "Dequeued element: " << value << '\n';
        }

        void printQueue() {
            if (isEmpty()) {
                std::cout << "Queue is Empty";
                return;
            }

            std::cout << "( ";
            for (int i = 0; i < array.size(); i++) {
                std::cout << array[i] << " ";
            }
            std::cout << ")" << '\n';
        }
};

int main() {
    Queue<int> queue;

    queue.enqueue(4);
    queue.enqueue(7);
    queue.printQueue();
    queue.dequeue();

    return 0;
}
