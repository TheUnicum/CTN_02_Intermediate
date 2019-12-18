#include <iostream>

int sum(int a, int b)
{
	if (a == 69)
	{
		throw std::runtime_error("<a> is the sex number!");
	}

	return a + b;
}

int f(int x, int y, int z)
{
	return sum(x, y) * sum(y, z);
}

int main()
{
	try
	{
		std::cout << f(1,69, 7) << std::endl;
	}
	catch (const std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cin.get();
	return 0;
}
