#include <iostream>
#include <string>
#include <random>
#include <bitset>

int main()
{
	std::bitset<8> a{54};
	std::bitset<8> b{7};
	std::cout << "a -> " << a << std::endl;
	std::cout << "b -> " << b << std::endl << std::endl;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	std::cout << "a -> " << a << std::endl;
	std::cout << "b -> " << b << std::endl;
  return 0;
}
