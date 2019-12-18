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
	const unsigned char a = 0b11000011;
	const unsigned char a_complement = ~a;

	std::cout << ToBin(a, 8) << std::endl;
	std::cout << ToBin(a_complement, 8) << std::endl;

	std::cout << "------Erase one option-----\n";
	int options = Options::Kappa | Options::Porn | Options::Ebola;
	std::cout << ToBin(options, 32) << std::endl;
	std::cout << ToBin(Options::Porn, 32) << std::endl;
	std::cout << ToBin(~Options::Porn, 32) << std::endl;
	options &= ~Options::Porn;
	std::cout << ToBin(options, 32) << std::endl;

	std::cout << OptionToString(options) << std::endl;

	//std::cout << OptionToString(Options::Kappa | Options::Porn | Options::Ebola) << std::endl;


	std::cout << "\n------Exclusive OR-----\n";
	int a2 = 0b10101010;
	int b2 = 0b11110000;

	std::cout << ToBin(a2, 8) << std::endl;
	std::cout << ToBin(b2, 8) << std::endl;
	std::cout << ToBin(a2 ^ b2, 8) << std::endl;



	std::cout << "\n------Toggle with Xor-----\n";
	options = Options::Kappa | Options::Porn | Options::Ebola;

	options ^= Options::Kappa;
	options ^= Options::Memes;

	std::cout << OptionToString(options) << std::endl;


	std::cin.get();
	return 0;
}
