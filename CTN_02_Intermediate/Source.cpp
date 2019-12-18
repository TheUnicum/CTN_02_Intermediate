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

template<class T>
void hash_combine(std::size_t& seed, const T& v)
{
	std::hash<T> hasher;
	seed ^= hasher(v) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
}

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

	template <> struct hash<Pube>
	{
		size_t operator()(const Pube& p) const
		{
			auto seed = std::hash<std::string>{}(p.str);
			hash_combine(seed, p.vec);
			hash_combine(seed, p.n);
			hash_combine(seed, p.m);
			return seed;
		}
	};

	template <> struct equal_to<Pube>
	{
		bool operator()(const Pube& lhs, const Pube& rhs) const
		{
			return lhs.str == rhs.str &&
				lhs.vec == rhs.vec &&
				lhs.m == rhs.m &&
				lhs.n == rhs.n;
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