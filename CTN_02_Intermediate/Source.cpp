#include <iostream>
#include <string>
#include <conio.h>
#include <unordered_map>
#include "Vec2.h"

struct Vei2Comparer
{
	template<typename T>
	bool operator()(const T& lhs, const T& rhs) const
	{
		return (lhs.x == rhs.x) ? lhs.y < rhs.y : lhs.x < rhs.x;
	}
};

struct Vei2Equals
{
	//template<typename T>
	bool operator()(const Vei2& lhs, const Vei2& rhs) const
	{
		return lhs.x == rhs.x && lhs.y == rhs.y;
	}
};


struct HashVec2
{
	//template<typename T>
	size_t operator()(const Vei2& vec) const
	{
		std::hash<int> hasher;
		auto hashx = hasher(vec.x);
		auto hashy = hasher(vec.y);

		hashx ^= hashy + 0x9e3779b9 + (hashx << 6) + (hashx >> 2);
		return hashx;
	}
};

int main()
{
	// crate umap and initialize with initializer_list of std::pair
	std::unordered_map<Vei2,std::string,HashVec2,Vei2Equals> map(
		{
			{ {23, 40}, "twenty three" },
			{ {99, 7000}, "ninty nine" },
			{ {1000000, 69}, "million" },
			{ {1337, 420}, "elite" },
		});

	std::cout << map[{99, 7000}];

	while (!_kbhit());
	return 0;
}

/*
How do I combine hash values in C++0x?

https://stackoverflow.com/questions/2590677/how-do-i-combine-hash-values-in-c0x
*/