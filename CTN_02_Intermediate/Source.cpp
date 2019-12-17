#include <iostream>
#include <string>
#include <vector>

class A
{
public:
	int& Get()
	{
		return x;
	}
private:
	int x;
};

int f()
{
	return 69;
}

int main()
{
	// rvalue can only appear on right side of assigment (=)
	// literal int
	420 = 69;
	// temporary return value from function
	f() = 420;

	// lvalue can be
	int x;
	x = 69;

	A obj;
	obj.Get() = 69;

	int r[5];
	r[3] = 420;

	return 0;
}
