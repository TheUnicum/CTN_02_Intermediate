#include <iostream>

int main()
{
	try
	{
		throw std::runtime_error("An exception!");
	}
	catch (const std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cin.get();
	return 0;
}
