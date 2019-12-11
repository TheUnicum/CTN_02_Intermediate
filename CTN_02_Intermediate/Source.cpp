#include <vector>
#include <iostream>

int CalcSum(int* pArray, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += pArray[i];
	}
	return sum;
}

int main()
{
	// https://it.cppreference.com/w/cpp/container/vector
	std::vector<int> vec = { 1, 2, 3 };

	int sum = CalcSum(&vec[0], vec.size());
	int sum2 = CalcSum(vec.data(), vec.size());
	std::cout << sum << std::endl;
	std::cout << sum2 << std::endl;

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	return 0;
}
