#include <iostream>

using namespace std::string_literals;

bool checkLeapYear(int year) 
{
	if (year % 4 == 0)
	{
		if (year % 100 != 0)
		{
			return true;
		}
		else if (year % 400 == 0)
		{
			return true;
		}
	}
	return false;
}

void ignoreLine()
{
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  //Ignore All Input in The Buffer upto Next 'ENTER'
}

int getYear()
{
	int year{};
	while (true)
	{
		std::cout << "Enter Year : ";
		std::cin >> year;
		if (std::cin.fail())
		{
			std::cin.clear();
			ignoreLine();
			std::cout << "Wrong Form of Input" << std::endl;
			continue;
		}
		if (year < 1952)
		{
			std::cout << "Year Below 1592 Not Supported!" << std::endl;
		}
		else
		{
			return year;
		}
	}
}

int main()
{
	int year{ getYear() };
	if (checkLeapYear(year))
	{
		std::cout << year << " is a Leap Year!" << std::endl;
	}
	else
	{
		std::cout << year << " is not a Leap Year!" << std::endl;
	}
}
