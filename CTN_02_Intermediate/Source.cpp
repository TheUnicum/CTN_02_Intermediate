#include <iostream>
#include <iomanip>
#include <limits>
int main()
{
	std::cout << std::setw(7) << 23 << std::setw(7) << 123 << std::setw(7) << 3 << std::endl;

	std::cout << "how many dicks! ";
	int nDicks;
	std::cin >> nDicks;
	//std::cin.get(); //--> get Enter click
	//std::cin.ignore(1000, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << (int)std::numeric_limits<char>::min() << std::endl;
	std::cout << (int)std::numeric_limits<unsigned char>::max() << std::endl;
	std::cout << std::numeric_limits<float>::max() << std::endl;

	for (int n = 0; n < nDicks; n++)
	{
		std::cout << "Dicks!";
	}

	std::cin.get();
	return 0;
}
