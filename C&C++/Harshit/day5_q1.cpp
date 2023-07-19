#include "myInput.h"
#include <iostream>

int main()
{
	std::cout << "Enter Number of Fibonacci Numbers to Print : ";
	int n{GoodInput::getInt()};
	int n1{0};
	int n2{1};
	int sum{};
	std::cout << n1;
	for (int i{ 0 }; i < n; i++)
	{
		std::cout << ", " << n2;
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
}
