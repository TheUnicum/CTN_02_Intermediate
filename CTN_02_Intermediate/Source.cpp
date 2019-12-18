#include <iostream>
#include <string>
#include <conio.h>
#include <map>
#include "Vec2.h"

struct Vei2Comparer
{
	bool operator()(const Vei2& lhs, const Vei2& rhs) const
	{
		return (lhs.x == rhs.x) ? lhs.y < rhs.y : lhs.x < rhs.x;
	}
};

int main()
{
	// create multimap with custom comparator
	std::multimap<Vei2, std::string, Vei2Comparer> mm;

	// initialize the map
	mm.emplace(Vei2{ 69, 420 }, "Majick numbers");
	mm.emplace(Vei2{ 56, -12 }, "some bullshit");
	mm.emplace(Vei2{ -1234, -12 }, "more bullshit");
	mm.emplace(Vei2{ 1336, 88 }, "multi bullshit 1");
	mm.emplace(Vei2{ 1336, 88 }, "multi bullshit 2");
	mm.emplace(Vei2{ 1336, 88 }, "multi bullshit 3");

	// print out range of values corresponding to Vei2 key
	const auto range = mm.equal_range({ 1336, 88 });
	for (auto i = range.first; i != range.second; i++)
	{
		std::cout << i->second << std::endl;
	}

	while (!_kbhit());
	return 0;
}

/*
https://it.cppreference.com/w/cpp/container

https://www.cs.usfca.edu/~galles/visualization/Algorithms.html

https://it.cppreference.com/w/cpp/container/set
https://it.cppreference.com/w/cpp/container/map
https://it.cppreference.com/w/cpp/container/multimap
*/