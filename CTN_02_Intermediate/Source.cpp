#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <Windows.h>
#include <sstream>

int main()
{
	// https://it.cppreference.com/w/cpp/string/basic_string
	std::string dout = "Pubes!\n";
	OutputDebugString(L"Bulllshit\n");
	OutputDebugStringA(dout.c_str());

	int a = 223;
	int b = 69;
	float c = 420.69f;
	dout = "some shit: a: " + std::to_string(a)
		+ " b: " + std::to_string(b) + " c: " + std::to_string(c) + "\n";
	OutputDebugStringA(dout.c_str());

	std::stringstream ss;
	ss << "some shit: a: " << a << " b: " << b << " c: " << c << + "\n";
	OutputDebugStringA(ss.str().c_str());

	std::cin.get();
	return 0;
}
