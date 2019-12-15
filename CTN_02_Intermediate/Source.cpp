#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

class Dude
{
public:
	Dude(int id, int x, int y)
	:
		id(id),
		x(x),
		y(y)
	{}
	void Print(std::ostream& out) const
	{
		out << "id:" << id << "|x:" << x << "|y:" << y;
	}
	bool operator<(const Dude& rhs) const
	{
		return id < rhs.id;
	}
	class YLess
	{
	public:
		bool operator()(const Dude& lhs, const Dude& rhs) const
		{
			return lhs.y < rhs.y;
		}
	};
private:
	int id;
	int x;
	int y;
};

int main()
{
	std::vector<Dude> vd = {
		{3,12,7},
		{2,3,22},
		{4,9,18},
		{0,13,62},
		{1,11,6}
	};

	std::sort(vd.begin(), vd.end(), Dude::YLess{});

	for (const auto& d : vd)
	{
		d.Print(std::cout);
		std::cout << std::endl;
	}

	std::cin.get();
	return 0;
}
