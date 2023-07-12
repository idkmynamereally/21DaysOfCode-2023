#include <iostream>

using namespace std::string_literals;

int main()
{
	double number{};
	int power{};
	std::cout << "Enter Number : ";
	std::cin >> number;
	std::cout << "Enter Power : ";
	std::cin >> power;
	double ans{1};
	for (int i{power}; i; i--)
	{
		ans = ans * static_cast<double>(number);
	}
	std::cout << number << "^" << power << " -> " << ans << std::endl;
}
