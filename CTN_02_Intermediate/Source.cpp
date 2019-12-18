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

// note that with enum class this would be annoying
// (because you cannot use |& easily with enum class)
enum Options
{
	Pubes = 0b000001,
	Kappa = 0b000010,
	Porn  = 0b000100,
	Memes = 0b001000,
	DaWhey= 0b010000,
	Ebola = 0b100000
};

std::string OptionToString(int opt)
{
	std::string opt_str;
	if (opt & Pubes)
	{
		opt_str += "Pubes ";
	}
	if (opt & Kappa)
	{
		opt_str += "Kappa ";
	}
	if (opt & Porn)
	{
		opt_str += "Porn ";
	}
	if (opt & Memes)
	{
		opt_str += "Memes ";
	}
	if (opt & DaWhey)
	{
		opt_str += "DaWhey ";
	}
	if (opt & Ebola)
	{
		opt_str += "Ebola ";
	}
	return opt_str;
}

int main()
{
	std::cout << OptionToString(Options::Kappa | Options::Porn | Options::Ebola) << std::endl;

	std::cin.get();
	return 0;
}
