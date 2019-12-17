#include <iostream>
#include <string>
#include <vector>

void nomnomnom(const std::string& str)
{
	std::cout << "lval noming!\n";

	auto copy = str;
	for (auto& c : copy)
	{
		c++;
	}
	std::cout << "Nom nom nom: " << copy << std::endl;
}

void nomnomnom(std::string&& donor)
{
	std::cout << "rval noming!\n";

	for (auto& c : donor)
	{
		c++;
	}
	std::cout << "Nom nom nom: " << donor << std::endl;
}

class Dog
{
public:
	Dog() = default;
	Dog(Dog&&)
	{
		std::cout << "move ctoring an Dog!\n";
	}
};

class Cat
{
private:
	Dog d1;
	Dog d2;
};

int main()
{
	{
		Cat c1;
		Cat c2 = std::move(c1);
	}

	std::string s = "This is just a dumb string pay it no heed.";
	//nomnomnom(static_cast<std::string&&>(s));
	nomnomnom(std::move(s));
	std::cout << "after noming: " << s << std::endl;

	nomnomnom(std::string("here is adumb string, it is going to die soon"));

	std::cin.get();
	return 0;
}