#include <iostream>
#include <string>
#include <unordered_map>
#include <conio.h>
#include <memory>
#include <functional>

class Foo
{
public:
	Foo(int x)
		: x(x)
	{}
	int GetX() const
	{
		return x;
	}
	static int DoStatic(int y)
	{
		return -y;
	}
private:
	int x;
};


int main()
{
	int(Foo::*pFooFunc)() const = &Foo::GetX;

	// member
	Foo f(69);
	std::cout << (f.*pFooFunc)() << std::endl;

	int(*pStafunc)(int) = &Foo::DoStatic;
	std::cout << pStafunc(-420) << std::endl;

	while (!_kbhit());
	return 0;
}
