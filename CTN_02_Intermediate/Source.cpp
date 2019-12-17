#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
	std::vector<std::string> v = { "nards", "mcchicken sandwich", "tourettes", "that's probably not how you spell turrets?", "applejizz", "mainac" };

	// filter to keep only long strings
	std::vector<std::string> filtered;
	std::copy_if(
		std::make_move_iterator(v.begin()),
		std::make_move_iterator(v.end()),
		std::back_inserter(filtered),
		[](const std::string& s)
	{
		return s.length() > 10;
	});
	// output result of filtering
	std::copy(filtered.begin(), filtered.end(),
		std::ostream_iterator<std::string>(std::cout, "\n")
	);
	// output what is left in original vector
	std::copy(v.begin(), v.end(),
		std::ostream_iterator<std::string>(std::cout, "\n")
	);

	std::cin.get();
	return 0;
}