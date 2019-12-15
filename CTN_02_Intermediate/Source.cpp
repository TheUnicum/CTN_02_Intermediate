#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{	//	https://en.cppreference.com/w/cpp/algorithm/sort
	//	https://en.cppreference.com/w/cpp/header/functional
	std::vector<int> vi = { 3,0,1,9,2,4,6,1,8,7,5 };

	std::sort(vi.begin(), vi.end(), std::greater<int>{});

	for (int n : vi)
	{
		std::cout << n;
	}

	std::cin.get();
	return 0;
}
