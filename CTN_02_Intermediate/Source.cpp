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

void Thiong(int &x)
{
	x *= 2;
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
	//sw["bs"] = std::bind(Thiong, 69);

	//sw["bs"]();

	std::function<void()> f;

	int x = 1;
	f = std::bind(Thiong, std::ref(x));

	f();
	f();
	f();

	std::cout << x;

	while (!_kbhit());
	return 0;
}
