#include <iostream>

int main(void)
{
	std::cout << "Enter an integer: ";

	int num;
	std::cin >> num;

    int doublenum=num*2;
	std::cout << "Double that number is: " << doublenum << '\n';

	return 0;
}
