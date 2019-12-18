#include <iostream>
#include <string>
#include <unordered_map>
#include <conio.h>
#include <memory>

struct SixtyNine
{
	void operator()() const
	{
		std::cout << "the sex number";
	}
};

struct FourTwenty
{
	void operator()() const
	{
		std::cout << "the weed number";
	}
};

int main()
{

	return 0;
}
