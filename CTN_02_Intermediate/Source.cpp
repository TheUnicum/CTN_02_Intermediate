#include <iostream>
#include <string>
#include <conio.h>
#include <map>
#include <algorithm>

int main()
{
	std::string response;
	std::string command;
	std::map<std::string, std::string> map;

	// initialize the map
	map.insert(std::pair<std::string, std::string>{ "crabdance", "crab people, crab people!" });
	map.emplace("asdfasdf", "asdfasdf asdfasdf asdf adsf");
	map.insert({ "cashme", "owsigh, hawbadah?" });
	map.insert({ "so", "you're saying that babies are delicious, and their flesh should be consumed daily" });

	//std::cout << map.find("so")->second << std::endl;

	//--------------
	// remove
	//--------------
	// remove doesn't work with map contaner

	//std::remove_if(map.begin(), map.end(), [](auto& el) {return el.firse.size() > 2; });

	for (auto i = map.begin(); i != map.end();)
	{
		if (i->first.size() > 2)
		{
			i = map.erase(i);
		}
		else
		{
			i++;
		}
	}


	for (auto& el : map)
	{
		std::cout << el.first << " : " << el.second << std::endl;
	}

	std::cout << "----\n";
	std::cin >> command;
	std::cout << map[command] << std::endl;

	while (!_kbhit())
	return 0;
}

/*
https://www.cs.usfca.edu/~galles/visualization/Algorithms.html

https://it.cppreference.com/w/cpp/container/map
*/