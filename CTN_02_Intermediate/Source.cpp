#include <iostream>
#include <vector>

class Pubes
{
public:
	int x;
};

int main()
{
	// https://en.cppreference.com/w/cpp/container/vector/erase
	std::vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7 };

	// ERASE
	//v.erase(v.begin() + 3);
	//v.erase(v.begin() + 3, v.begin() + 6);
	
	//
	auto i_invalidated = v.begin() + 4;
	//v.erase(v.begin() + 3, v.begin() + 6);
	v.push_back(69);
	std::cout << *i_invalidated;

	for (int val : v)
	{
		std::cout << val << " ";
	}

	std::cin.get();
	return 0;
}
