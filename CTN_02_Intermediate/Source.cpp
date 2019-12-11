#include <vector>
#include <iostream>
#include <limits>

class Pube
{
public:
	Pube()
	{
		std::cout << "Made a default pube." << std::endl;
	}
	Pube(const Pube& )
	{
		std::cout << "Copied a pube." << std::endl;
	}
	~Pube()
	{
		std::cout << "Destroyed pube." << std::endl;
	}
};

int main()
{
	// https://it.cppreference.com/w/cpp/container/vector

	std::vector<Pube> pubes(8); // makes 8 element
	// reserve
	// resize
	// shrink_to_fit
	// emplace_back

	std::cout << pubes.capacity() << std::endl;
	pubes.push_back(Pube{});
	std::cout << pubes.capacity() << std::endl;

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}
