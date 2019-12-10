#include <conio.h>
#include <algorithm>

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

void int2str(const int n,char* buf )
{
	int num = n;

	char* p = buf;
	do
	{
		int dig = num % 10;
		num = num / 10;
		
		*p = dig + '0';
		p++;

	} while (num > 0); 
	*p = 0;
}

void inv(char* buf)
{
	int size = 0;
	for (char* p = buf; *p != 0; p++)
	{
		size++;
	}

	for (char* rp = buf + size-1; buf < rp; buf++, rp--)
	{
		std::swap(*buf, *rp);
	}

}

int fib(int n)
{
	if (n < 2)
	{
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	print("Enter a number> ");
	char answer[69];
	read(answer, 69);

	const int fibNumber = str2int(answer);

	const int fibAnswer = fib(fibNumber);

	int2str(fibAnswer,  answer);
	inv(answer);
	print("\n");
	print(answer);

	while (!_kbhit());
	return 0;
}
