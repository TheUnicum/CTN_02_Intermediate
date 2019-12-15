#include <iostream>
#include <vector>

class Pubes
{
public:
	int x;
};

int main()
{
	std::vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7 };

	std::vector<int>::iterator i = v.begin();
	// or with auto
	auto e = v.end();

	std::cout << *i;
	i++;
	std::cout << *i;

	// part 2
	std::cout << "\nPart2 |All vector|\n";
	for (auto i = v.begin(), e = v.end(); i != e; ++i)
	{
		std::cout << *i << " ";
	}
	// part 3
	std::cout << "\nPart3 From (+1) to (-2)|\n";
	for (auto i = v.begin() + 1, e = v.end() - 2; i != e; ++i)
	{
		std::cout << *i << " ";
	}
	// part 4
	std::cout << "\nPart4 operation between iterators|\n";
	std::cout << "Subtraction between iterators: " << v.end() - v.begin() << "\n";

	// part 5 With classes
	std::cout << "\nPart5 classes\n";
	std::vector<Pubes> p = { {69}, {420} };
	for (auto i = p.begin(), e = p.end(); i != e; i++)
	{
		std::cout << (*i).x << " ";
	}

	std::cin.get();
	return 0;
}
