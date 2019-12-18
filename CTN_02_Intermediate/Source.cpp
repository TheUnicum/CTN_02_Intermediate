#include <iostream>
#include <vector>

class Pube
{
public:
	Pube()
	{
		std::cout << "constructing pube" << std::endl;
	}
	Pube(Pube&&) noexcept
	{
		std::cout << "moving pube" << std::endl;
	}
	Pube(const Pube&)
	{
		std::cout << "copying pube" << std::endl;
	}
};

int main()
{
	std::vector<Pube> pubes;
	pubes.emplace_back();
	pubes.emplace_back();
	pubes.emplace_back();

	std::cin.get();
	return 0;
}
