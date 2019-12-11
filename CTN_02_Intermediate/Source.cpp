#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
	// https://it.cppreference.com/w/cpp/string/basic_string
	std::string book;
	std::ifstream in("warp.txt");

	//std::cout << "Begin reading\n";
	//char c;
	//while (in >> c)
	//{
	//	book.push_back(c);
	//}
	//std::cout << "End reading\n";

	for (int n = 0; n < 20; n++)
	{
		//in >> book;
		std::getline(in, book);
		std::cout << book << std::endl;
	}

	std::cin.get();
	return 0;
}
