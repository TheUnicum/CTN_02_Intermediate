#include <vector>
#include <iostream>
#include <limits>

int main()
{
	std::cout << "How many? ";
	int size;
	std::cin >> size;

	std::vector<int> vec1(size);

	std::cout <<"\nYour vector contains:";
	for (int i = 0; i < size; i++)
	{
		std::cout << " " << vec1[i];
	}

	std::vector<int> vec2(size, 69);
	std::cout << "\nYour vector contains:";
	for (int i = 0; i < vec2.size(); i++)
	{
		std::cout << " " << vec2[i];
	}

	std::vector<int> vec3({69, 420, size});
	std::cout << "\nYour vector contains:";
	for (const int n : vec3)
	{
		std::cout << " " << n;
	}
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}
