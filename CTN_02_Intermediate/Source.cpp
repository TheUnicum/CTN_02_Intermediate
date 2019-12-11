#include <vector>
#include <iostream>
#include <limits>

void f(const std::vector<int>& v)
{}

int main()
{
	std::vector<int> vec1;

	while (true)
	{
		std::cout << "Enter a number (negative number to quit); ";
		int n;
		std::cin >> n;
		if (n < 0)
		{
			break;
		}
		vec1.push_back(n);
	}

	std::cout << "\nYour vector contains:";
	for (const int n : vec1)
	{
		std::cout << " " << n;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}
