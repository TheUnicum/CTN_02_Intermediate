#include <iostream>
#include <string>
#include <vector>

void nomnomnom(const std::string& str)
{
	auto copy = str;
	for (auto& c : copy)
	{
		c++;
	}
	std::cout << "Nom nom nom: " << copy << std::endl;
}

int main()
{
	std::string s = "This is just a dumb string pay it no heed.";
	nomnomnom(s);
	std::cout << "after noming: " << s << std::endl;

	std::cin.get();
	return 0;
}
