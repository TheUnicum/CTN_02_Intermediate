#include <conio.h>

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

void int2str(int val,char* buf, int size)
{
	//int num = n;
	//
	//char* p = buf;
	//do
	//{
	//	int dig = num % 10;
	//	num = num / 10;
	//	
	//	*p = dig + '0';
	//	p++;
	//
	//} while (num > 0); 
	//*p = 0;

	char* const pStart = buf;
	char* const pEnd = buf + size;
	for (; val > 0 && (buf + 1) < pEnd; val /= 10,buf++)
	{
		*buf = '0' + val % 10;
	}
	*buf = 0;
	strrev(pStart);
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
	
	print("\nFibonacci number <");
	print(answer);
	print("> is: ");

	const int fibNumber = fib(str2int(answer));
	int2str(fibNumber, answer, 69);
	print(answer);

	while (!_kbhit());
	return 0;
}
