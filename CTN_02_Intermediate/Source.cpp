#include <conio.h>
#include <fstream>

namespace chili
{
	void print(const char* s)
	{
		for (; *s != 0; s++)
		{
			_putch(*s);
		}
	}

	void read(char* buf, int maxSize)
	{
		const char* const pEnd = buf + maxSize;
		for (char c = _getch(); c != 13 && (buf + 1) < pEnd; c = _getch(), buf++)
		{
			_putch(c);
			*buf = c;
		}
		*buf = 0;
	}

	int str2int(const char* s)
	{
		// scan to start point
		const char* p = s;
		for (; *p >= '0' && *p <= '9'; p++);
		p--; // now p point to the last digit

		int val = 0;
		int place = 1;
		// convert place and accumulate
		for (; p >= s; p--)
		{
			val += (*p - '0') * place;
			place *= 10;
		}

		return val;
	}

	int fib(int n)
	{
		if (n < 2)
		{
			return n;
		}
		return fib(n - 1) + fib(n - 2);
	}

	void strrev(char* pl)
	{
		// scan to start point
		char* pr = pl;
		for (; *pr != 0; pr++);
		pr--;

		for (; pl < pr; pl++, pr--)
		{
			const char temp = *pl;
			*pl = *pr;
			*pr = temp;
		}
	}

	void int2str(int val, char* buf, int size)
	{
		char* const pStart = buf;
		char* const pEnd = buf + size;
		for (; val > 0 && (buf + 1) < pEnd; val /= 10, buf++)
		{
			*buf = '0' + val % 10;
		}
		*buf = 0;
		strrev(pStart);
	}
}

int main()
{
	std::ifstream in("derp.txt");

	if (!in)
	{
		chili::print("\nFail to  open file!");
		while (!_kbhit());
		return -1;
	}

	in.seekg(44);
	in.seekg(-43, std::ios_base::cur);

	for (char c = in.get(); in.good(); c = in.get())
	{
		_putch(c);
	}

	if (in.bad())
	{
		chili::print("\nFucked up!");
	}
	else if (in.eof())
	{
		chili::print("\nSucceccfully reached end of file.");
	}
	else // in.fail
	{
		chili::print("\nSome kind of fail!");
	}

	while (!_kbhit());
	return 0;
}