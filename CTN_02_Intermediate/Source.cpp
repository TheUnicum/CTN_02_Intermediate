#include <iostream>
#include <string>
#include <conio.h>
#include <unordered_map>
#include "Vec2.h"

struct Pube
{
	std::string str;
	Vei2 vec;
	int n;
	char m;
};

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

namespace std
{
	template <> struct hash<Vei2>
	{
		size_t operator()(const Vei2& vec) const
		{
			std::hash<int> hasher;
			auto hashx = hasher(vec.x);
			auto hashy = hasher(vec.y);

			hashx ^= hashy + 0x9e3779b9 + (hashx << 6) + (hashx >> 2);
			return hashx;
		}
	};
}

int main()
{
	// crate umap and initialize with initializer_list of std::pair
	std::unordered_map<Pube,std::string> map(
		{
			{{ "you", {23, 40}, 12, 92}, "you" },
			{{ "me", {69, 40}, 420, 69}, "will" },
			{{ "you", {23, 40}, 12, 91}, "never" },
			{{ "me", {69, 69}, 420, 69}, "get this" },
		});

	std::cout << map[{ "you", { 23, 40 }, 12, 91}];

	while (!_kbhit());
	return 0;
}

/*
How do I combine hash values in C++0x?

https://stackoverflow.com/questions/2590677/how-do-i-combine-hash-values-in-c0x
*/