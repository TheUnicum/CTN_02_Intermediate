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
	map.insert({ "crabdance", "crab people, crab people!" });
	map.insert({ "cashme", "owsigh, hawbadah?" });
	map.insert({ "so", "you're saying that babies are delicious, and their flesh should be consumed daily" });

	std::cin >> command;
	std::cout << map[command] << std::endl;

	while (!_kbhit());
	return 0;
}

/*
https://www.cs.usfca.edu/~galles/visualization/Algorithms.html
*/