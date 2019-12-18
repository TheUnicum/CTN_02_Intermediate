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
	const unsigned char a = 69;
	const unsigned char b = 42;
	const unsigned char c = 169;
	const unsigned char d = 242;

	std::cout << ToBin(a, 8) << " <- a" << std::endl;
	std::cout << ToBin(b, 8) << " <- b" << std::endl;
	std::cout << ToBin(c, 8) << " <- c" << std::endl;
	std::cout << ToBin(d, 8) << " <- d" << std::endl;

	unsigned int packed = 0;

	packed = a;
	std::cout << ToBin(packed, 32) << " <- p: xxxa" << std::endl;

	std::cout << ToBin(b << 8, 32) << " <- b << 8" << std::endl;
	packed = packed | b << 8;
	std::cout << ToBin(packed, 32) << " <- p: xxba" << std::endl;

	std::cout << ToBin(c << 16, 32) << " <- c << 16" << std::endl;
	packed = packed | c << 16;
	std::cout << ToBin(packed, 32) << " <- p: xcba" << std::endl;

	std::cout << ToBin(d << 24, 32) << " <- d << 24" << std::endl;
	packed = packed | d << 24;
	std::cout << ToBin(packed, 32) << " <- p: dcba" << std::endl;
	// unpack
	std::cout << ((packed & 0b111111110000000000000000) >> 16) << " <- c unpacked!" << std::endl;

	std::cin.get();
	return 0;
}
