#include <iostream>
#include <string>
#include <conio.h>
#include <map>
#include <algorithm>
#include <vector>
#include <set>

int main()
{
	std::string response;
	std::string command;
	std::map<std::string, std::string> map;

	//// initialize the map
	//map.insert(std::pair<std::string, std::string>{ "crabdance", "crab people, crab people!" });
	//map.emplace("asdfasdf", "asdfasdf asdfasdf asdf adsf");
	//map.insert({ "cashme", "owsigh, hawbadah?" });
	//map.insert({ "so", "you're saying that babies are delicious, and their flesh should be consumed daily" });
	//
	//
	//std::cin >> command;
	//std::cout << map[command] << std::endl;

	std::vector<int> input = { 1,3,1,1,3,5,0,3,9,6,4,4,7,6,4,5,6,1,0 };
	std::set<int> seen;

	for (int in : input)
	{
		auto result = seen.insert(in);
		if (result.second)
		{
			std::cout << in << " ";
		}
	}

	std::cout << std::endl;

	while (!_kbhit())
	return 0;
}

/*
https://www.cs.usfca.edu/~galles/visualization/Algorithms.html

https://it.cppreference.com/w/cpp/container/map
*/