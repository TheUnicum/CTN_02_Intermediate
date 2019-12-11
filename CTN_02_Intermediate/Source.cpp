#include <iostream>
#include <iomanip>
#include <fstream>

int main()
{
	std::ofstream out("pubes.txt");
	out << "Daddy would you like some " << 420.69f << " sausages!";
	
	return 0;
}
