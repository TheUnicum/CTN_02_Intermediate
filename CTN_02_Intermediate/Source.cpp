#include <iostream>
#include <string>

class Annuncer
{
public:
	Annuncer(const std::string& name)
		:
		name(name)
	{
		std::cout << "Constructing " << name << std::endl;
	}
	~Annuncer()
	{
		std::cout << "Destroying " << name << std::endl;
		throw std::runtime_error("Oops");
	}
private:
	std::string name;
};

int sum(int a, int b)
{
	Annuncer j("j");
	Annuncer k("k");

	auto p = std::make_unique<Annuncer>("fuck");

	if (a == 69)
	{
		throw std::runtime_error("<a> is the sex number!");
	}

	if (b == 420)
	{
		throw std::logic_error("<b> is the weed number!");
	}

	Annuncer l("l");

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
		std::cout << "Caught a std::runtime_error in f: " << e.what() << std::endl;
		throw;
	}
}

int main()
{
	try
	{
		std::cout << f(69,420, 7) << std::endl;
	}
	catch (const std::runtime_error& e)
	{
		std::cout << "Caught a std::runtime_error in main: " << e.what() << std::endl;
	}
	catch (const std::exception & e)
	{
		std::cout << "Caught a std::exception in main: " << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "Caught *something* in main" << std::endl;
		//throw;
	}

	std::cin.get();
	return 0;
}

/*
http://download.vikis.lt/doc/libstdc++-docs-4.4.7/html/api/a00367.html

https://en.cppreference.com/w/cpp/error/logic_error
https://en.cppreference.com/w/cpp/error/runtime_error
*/