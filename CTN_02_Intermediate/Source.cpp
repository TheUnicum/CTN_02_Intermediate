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

struct Foo
{
	int y = 3;
	int DoublePlus(int x)
	{
		return x * 2 + y;
	}
	int TriplePlus(int x)
	{
		return x * 3 + y;
	}
};


int main()
{
	//std::unordered_map<std::string, std::function<void()>> sw;

	//sw["sixty-nine"] = []()
	//{
	//	std::cout << "the sex number";
	//};
	//sw["four-twenty"] = FourTwenty;

	//sw["sixty-nine"]();

	int(Foo::*pFooFunc)(int);

	pFooFunc = &Foo::DoublePlus;

	Foo f;
	Foo* pf = &f;

	std::cout << (f.*pFooFunc)(4) << std::endl;
	std::cout << (pf->*pFooFunc)(4) << std::endl;

	while (!_kbhit());
	return 0;
}
