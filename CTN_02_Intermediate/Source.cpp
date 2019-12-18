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
	const int a = 0b10100101;
	const int b = 0b11110000;
	std::cout << ToBin(a) << " <- a" << std::endl;
	std::cout << ToBin(b) << " <- b" << std::endl;
	std::cout << ToBin(a & b) << " <- a & b" << std::endl;


	std::cout << "----\n";
	std::cout << "combine with or\n";
	const int a1 = 0b00000101;
	const int b1 = 0b10100000;
	std::cout << ToBin(a1, 8) << " <- a" << std::endl;
	std::cout << ToBin(b1) << " <- b" << std::endl;
	std::cout << ToBin(a1 | b1) << " <- a | b" << std::endl;
	
	
	std::cout << "----\n";
	std::cout << "Shift bit left <<\n";
	const int a2 = 0b00000101;
	std::cout << ToBin(a2, 8) << " <- a" << std::endl;
	std::cout << ToBin(a2 << 4, 8) << " <- a << 4" << std::endl;


	std::cout << "----\n";
	std::cout << "Shift bit right >>\n";
	const int a3 = -1;
	std::cout << ToBin(a3, 8) << " <- a" << std::endl;
	std::cout << ToBin(a3 >> 4, 8) << " <- a >> 4" << std::endl;

	std::cin.get();
	return 0;
}
