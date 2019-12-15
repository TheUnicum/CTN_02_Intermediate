#include <iostream>
#include <vector>

int main()
{	// https://en.cppreference.com/w/cpp/container/vector/erase
	std::vector<int> v = { 0, 1, 2, 3, 4, 5, 6, 7 };

	for (auto i = v.begin(), e = v.end(); i != e; ++i)
	{
		// erase all multiple of 3
		if (*i % 3 == 0)
		{
			i = v.erase(i);
		}
		else
		{
			++i;
		}
	}

	for (int val : v)
	{
		std::cout << val << " ";
	}

	std::cin.get();
	return 0;
}
