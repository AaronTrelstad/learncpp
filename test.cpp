#include <array>
#include <iostream>
#include <string_view>
#include <tuple>
#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int x{ }; 
    std::cin >> x; 

    std::cout << "You entered " << x << '\n';
    return 0;
}
