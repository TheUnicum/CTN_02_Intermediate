#include <conio.h>

void print(const char* s)
{
	for (; *s != 0; s++)
	{
		_putch(*s);
	}
}

int main()
{
	char msg[] = { 'P','u','b','e','s','"','!','"','\n',0 };
	char msg2[] = "Pubes\"!\"\n";	//WARNING extra element NULL in string
	msg[0] = 'G';
	print(msg);
	print(msg2);

	//
	const char* waifu = "MYWIFE";
	print(waifu);

	while (!_kbhit());
	return 0;
}
