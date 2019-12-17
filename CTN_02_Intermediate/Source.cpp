#include <iostream>
#include <string>
#include <memory>

class Pube
{
public:
	Pube()
	{
		std::cout << "pube ctor\n";
	}
	Pube(const Pube&)
	{
		std::cout << "pube copy ctor\n";
	}
	~Pube()
	{
		std::cout << "pube dtor\n";
	}
	void mint() const
	{
		std::cout << "newt!\n";
	}
};

void f(const Pube p)
{
	std::cout << "f(): ";
	p.mint();
}

void g(const Pube& p)
{
	std::cout << "g(): ";
	p.mint();
}

void h(const Pube* pp)
{
	std::cout << "h(): ";
	pp->mint();
}

int main()
{
	{
		auto p = std::make_unique<Pube>();
		f(*p);
		g(*p);
		h(p.get());
		p->mint();
	}

	std::cout << "------\n";
	{
		auto p = std::make_unique<Pube[]>(3);
		p[2].mint();
	}
	std::cin.get();
	return 0;
}
