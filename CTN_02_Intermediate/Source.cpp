#include <iostream>
#include <string>
#include <unordered_map>
#include <conio.h>
#include <memory>
#include <functional>


void SixtyNine()
{
	std::cout << "the sex number";
}

void FourTwenty()
{
	std::cout << "the weed number";
}


int main()
{
	std::unordered_map<std::string, std::function<void()>> sw;

	sw["sixty-nine"] = []()
	{
		std::cout << "the sex number";
	};
	sw["four-twenty"] = FourTwenty;

	sw["sixty-nine"]();

	while (!_kbhit());
	return 0;
}
