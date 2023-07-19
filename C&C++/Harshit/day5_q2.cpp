#include "myInput.h"
#include <iostream>

int findLCM(int, int);

int main()
{
	std::cout << "Enter Number 1 : ";
	int a{ GoodInput::getInt() };
	std::cout << "Enter Number 2 : ";
	int b{ GoodInput::getInt() };
	std::cout << findLCM(a, b);
}

int findLCM(int a, int b)
{	
	if (a > b)		//Bigger Value is always at b
	{
		int temp{ a };
		a = b; 
		b = a;
	}
	if (a == b)
	{
		return b;
	}
	if (a == 0)
	{
		std::cout << "0's Are Illegal Input!" << std::endl;
		return -1;
	}
	if (a == 1)
	{
		return b;
	}
	for (int i{ 1 }; true; i++) 
	{
		if ((i * b) % a == 0)
		{
			return (i * b);
		}
	}
}
