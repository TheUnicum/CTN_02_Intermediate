#include <iostream>

int sum(int a, int b)
{
	if (a == 69)
	{
		throw std::runtime_error("<a> is the sex number!");
	}

	if (b == 420)
	{
		throw 1337;
	}

	return a + b;
}

int f(int x, int y, int z)
{
	try
	{
		return sum(x, y) * sum(y, z);
	}
	catch (const std::runtime_error& e)
	{
		throw;
	}

}

int main()
{
	try
	{
		std::cout << f(1,420, 7) << std::endl;
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Caught in main: " << e.what() << std::endl;
	}
	catch (const int& i)
	{
		std::cout << "Caught an int in main: " << i << std::endl;
	}

	std::cin.get();
	return 0;
}
