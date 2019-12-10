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

int main()
{
	char msg[] = { 'P','u','b','e','s','"','!','"','\n',0 };
	char msg2[] = "Pubes\"!\"\n";	//WARNING extra element NULL in string
	msg[0] = 'G';
	print(msg);
	print(msg2);

	// Point to a constant STRING
	const char* waifu = "MYWIFE\n";
	print(waifu);

	// Get a Character
	char c = _getch();
	_putch(c);

	print("Type some shit: ");
	char inbuf[69];
	read(inbuf, 69);
	print("\nYou typed: ");;
	print(inbuf);

	while (!_kbhit());
	return 0;
}
