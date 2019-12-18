#include <iostream>
#include <string>
#include <unordered_map>
#include <conio.h>
#include <memory>

struct CaseFunction
{
	virtual void operator()() const = 0;
};

struct SixtyNine : public CaseFunction
{
	void operator()() const override
	{
		std::cout << "the sex number";
	}
};

struct FourTwenty : public CaseFunction
{
	void operator()() const override
	{
		std::cout << "the weed number";
	}
};

int main()
{
	std::unordered_map<std::string, std::unique_ptr<CaseFunction>> sw;

	sw["sixty-nine"] = std::make_unique<SixtyNine>();
	sw["four-twenty"] = std::make_unique<FourTwenty>();

	(*sw["sixty-nine"])();

	while (!_kbhit());
	return 0;
}
