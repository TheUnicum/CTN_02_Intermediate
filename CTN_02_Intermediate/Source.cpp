#include <iostream>
#include <string>
#include <conio.h>

int main()
{
	std::string response;
	std::string command;

	std::cin >> command;
	switch (command)
	{
	case "crabdance":
		response = "crab people, crab people!";
		break;
	// etc.
	}

	std::cout << response << std::endl;

	while (!_kbhit());
	return 0;
}
