#include <iostream>
#include <cmath>

using namespace std::string_literals;

void checkTriangle(int s1, int s2, int s3)
{
	if (s1 == s2 && s2 == s3)
	{
		std::cout << "Its a Equilateral Triangle!" << std::endl;
	}
	else if (s1 == s2 || s2 == s3 || s1 == s3)
	{
		std::cout << "Its a Isoceles Triangle!" << std::endl;
	}
	else
	{
		std::cout << "Its a Scalene Triangle!" << std::endl;
	}
}

int main()
{
	std::cout << "Enter The Sides : ";
	int s1{};
	int s2{};
	int s3{};
	std::cin >> s1 >> s2 >> s3;
	checkTriangle(s1, s2, s3);
}
