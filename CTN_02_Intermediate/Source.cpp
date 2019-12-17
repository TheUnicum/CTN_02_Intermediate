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

class PubeGrabber
{
public:
	void Give(std::unique_ptr<Pube> p)
	{
		pPube = std::move(p);
	}
	std::unique_ptr<Pube> Take()
	{
		return std::move(pPube);
	}
private:
	std::unique_ptr<Pube> pPube;
};

std::unique_ptr<Pube> MakePube()
{
	return std::make_unique<Pube>();
}

int main()
{
	{
		PubeGrabber pg;
		pg.Give(MakePube()); // transfer ownership
		pg.Take();
	}
	{
		PubeGrabber pg;
		PubeGrabber pg2 = pg;
		pg.Give(MakePube()); // transfer ownership
		pg.Take();
	}
	std::cin.get();
	return 0;
}
