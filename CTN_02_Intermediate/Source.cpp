#include <iostream>
#include <string>
#include <conio.h>
#include <map>

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

	map.count("so");
	std::cout << map.find("so")->second << std::endl;

	std::cin >> command;
	std::cout << map[command] << std::endl;

	while (!_kbhit());
	return 0;
}

/*
https://www.cs.usfca.edu/~galles/visualization/Algorithms.html

https://it.cppreference.com/w/cpp/container/map
*/