#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

int main()
{
	// https://it.cppreference.com/w/cpp/string/basic_string

	std::string s = "Dat";
	std::string t = "Boi";
	std::string m = s + t;
	m.push_back('!');
	m += std::to_string(420);
	std::cout << m;
	std::cout << m.size();

	std::string testNum = "69";
	int num = std::stoi(testNum);

	//
	std::cout << "\n\npart -1- index operator ----------(21:30)\n";
	std::string str = "ELECTION";	
	std::cout << "The 2nd character is: " << str[1] << std::endl;
	std::cout << "Change it to an 'R' and you get: ";
	str[1] = 'R';
	std::cout << str << std::endl;

	//
	std::cout << "\n\npart -2- erase\n";
	std::string str2 = "Try our Black Angus!";
	str2.erase(16, 1);
	str2.insert(18, " Creampie");
	str2.replace(8, 5, "White");
	std::cout << str2 << std::endl;

	// find
	const int iAnus = str2.find("Anus");
	if (iAnus != std::string::npos)
	{
		std::cout << "The Anus is at: " << iAnus << std::endl;
	}
	else
	{
		std::cout << "There is no anus." << std::endl;
	}

	const std::string sub = str2.substr(14, 4);
	std::cout << sub << std::endl;

	str2.resize(3);
	std::cout << str2 << std::endl;
	str2.resize(69, '?');
	std::cout << str2 << std::endl;

	std::cin.get();
	return 0;
}
