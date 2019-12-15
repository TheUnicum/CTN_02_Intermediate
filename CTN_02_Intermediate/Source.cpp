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

	for (auto i = v.begin(), e = v.end(); i != e; i += 2)
	{
		std::cout << *i << " ";
	}

	std::cout << std::endl << (v.end() - v.begin()) << std::endl;


	std::vector<Pubes> p = { {69}, {420} };
	for (auto i = p.begin(), e = p.end(); i != e; i++)
	{
		std::cout << i->x << " ";
	}

	// Nice exception
	//std::cout << *v.end();
	//--v.begin();

	std::cin.get();
	return 0;
}
