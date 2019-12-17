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

int main()
{
	{
		PubeGrabber pg;
		auto p = std::make_unique<Pube>();
		pg.Give(std::move(p)); // transfer ownership
		pg.Take();
		// delete p; // problem with raw pointer 
	}
	std::cin.get();
	return 0;
}
