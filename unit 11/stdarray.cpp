#include <iostream>
#include <array>
#include <vector>

int main() {
    std::vector<int> numbers{2, 4, 6};

    numbers.push_back(2);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << '\n';
    }

    return 0;
}
