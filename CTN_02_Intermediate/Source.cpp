#include <string>
#include <algorithm>
#include <iostream>

std::string ToBin(unsigned int n, int min_digits = 0)
{
	std::string bin_str;
	for (int count = 0; n != 0 || count < min_digits; n >>= 1, count++)
	{
										// this ? : is called the 'ternary' opertor BTW
		bin_str.push_back(bool(n & 0b1) ? '1' : '0');
	}
	std::reverse(bin_str.begin(), bin_str.end());
	return bin_str;
}

int main()
{
	std::cout << ToBin(232) << std::endl;
	std::cout << ToBin(0xE8) << std::endl;
	std::cout << ToBin(0b11101000) << std::endl;

	std::cin.get();
	return 0;
}
