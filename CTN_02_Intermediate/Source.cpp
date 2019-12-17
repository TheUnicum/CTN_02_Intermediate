#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string a = "i am a very good bad boy";
	std::string b = std::move(a);// a;

	std::cout << "a: " << a << std::endl << "b: " << b << std::endl;

	std::cin.get();
	return 0;
}
