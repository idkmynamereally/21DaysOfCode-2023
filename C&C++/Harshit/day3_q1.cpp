#include <iostream>
#include <cmath>

using namespace std::string_literals;

int main()
{
	double number{};
	int power{};
	std::cout << "Enter Number : ";
	std::cin >> number;
	std::cout << "Enter Power : ";
	std::cin >> power;
	double ans{pow(number, power)};
	std::cout << number << "^" << power << " -> " << ans << std::endl;
}

