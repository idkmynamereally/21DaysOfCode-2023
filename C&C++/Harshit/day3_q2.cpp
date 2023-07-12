#include <iostream>
#include <cmath>

using namespace std::string_literals;

int main()
{
	double number{};
	std::cout << "Enter Number : ";
	std::cin >> number;
	double ans{log(number)};
	std::cout << number << " Natural Log is -> " << ans << std::endl;
}
