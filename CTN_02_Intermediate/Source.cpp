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
	void Give(Pube* p)
	{
		delete pPube;
		pPube = p;
	}
	Pube* Take()
	{
		auto temp = pPube;
		pPube = nullptr;
		return temp;
	}
	~PubeGrabber()
	{
		delete pPube;
	}
private:
	Pube* pPube = nullptr;
};

int main()
{
	{
		PubeGrabber pg;
		auto p = new Pube;
		pg.Give(p);
		// delete p; // problem with raw pointer 
	}
	std::cin.get();
	return 0;
}
