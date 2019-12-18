#include <iostream>
#include <string>
#include <conio.h>
#include <unordered_map>


int main()
{
	// crate umap and initialize with initializer_list of std::pair
	std::unordered_map<std::string, int> map(
	{
		{ "one",1 },
		{ "seven",7 },
		{ "five",5 },
		{ "nine",9 },
		{ "two",2 },
		{ "eight",8 },
		{ "three",3 },
		{ "six",6 },
		{ "four",4 },
		{ "zero",0 }
	});

	// get user input
	std::string input;
	std::cin >> input;
	// lookup
	auto i = map.find(input);
	// print value if key exists, or error message otherwise
	if (i != map.end())
	{
		std::cout << i->second;
	}
	else
	{
		std::cout << "That ain't a valid key bro.";
	}

	while (!_kbhit());
	return 0;
}

