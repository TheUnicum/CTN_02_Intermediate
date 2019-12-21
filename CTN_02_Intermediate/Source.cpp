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

	std::function<int(Foo&, int)> f1 = &Foo::DoublePlus;
	auto f2 = std::mem_fn(&Foo::TriplePlus);

	Foo myfoo;

	std::function<void()> f;

	int x = 1;
	f = [&myfoo]() { myfoo.DoublePlus(69); };
	f = std::bind(&Foo::DoublePlus, std::ref(myfoo), 69);

	f();
	f();
	f();


	while (!_kbhit());
	return 0;
}
