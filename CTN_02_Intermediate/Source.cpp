#include <iostream>
#include <string>
#include <unordered_map>
#include <conio.h>
#include <memory>
#include <functional>

class StringSwitch
{
public:
	std::function<void()>& Case(std::string str)	// set function of our case
	{
		return map[str];
	}
	std::function<void()>& Default()
	{
		return def;
	}
	void operator[](const std::string& str) const
	{
		auto i = map.find(str);	//map[str]();
		if (i != map.end())
		{
			i->second();
		}
		else
		{
			def();
		}
	}
private:
	std::unordered_map<std::string, std::function<void()>> map;
	std::function<void()> def = []() {};
};


int main()
{
	int x = 69;

	StringSwitch sw;
	sw.Case("foo") = [&]() {std::cout << "you did a foo" << x; };
	sw.Case("bar") = []() {std::cout << "you did a bar"; };
	sw.Default() = []() {std::cout << "idkwtf that is"; };

	sw["foo"];
	sw["pubes"];

	while (!_kbhit());
	return 0;
}
