#include <iostream>
#include <cmath>
#include <sstream>

using namespace std::string_literals;

void findRoots(double a, double b, double c)
{
	std::ostringstream ss;
	ss << a << "x2 + " << b << "x + " << c;
	std::string equation{ss.str()};
	
	int typeOfRoots{0};
	double root1{};
	double root2{};
	double D{(b*b) - 4*a*c};
	if (D > 0)
	{
		typeOfRoots = 0;
		std::cout << "The Equation " << equation << " has Real & Distinct Roots" << std::endl;
	}
	else if (D < 0)
	{
		typeOfRoots = 1;
		std::cout << "The Equation " << equation << " has 2 Complex Roots" << std::endl;
	}
	else
	{
		typeOfRoots = 2;
		std::cout << "The Equation " << equation << " has 1 Real Root" << std::endl;
	}
	
	if (typeOfRoots == 1)
	{
		return;
	}
	else 
	{
		double denom{ 2 * a };
		root1 = (-b + sqrt(D))/denom;
		root2 = (-b - sqrt(D))/denom;
	}
	std::cout << "Roots of the equation " << equation << " are -> " << root1 << ", " << root2 << std::endl;
	std::cout << "Determinant of the equation -> " << D << std::endl;
}

int main()
{
	int a{};
	int b{};
	int c{};
	std::cout << "a -> ";
	std::cin >> a;
	std::cout << "b -> ";
	std::cin >> b;
	std::cout << "c -> ";
	std::cin >> c;
	findRoots(a,b,c);
}
