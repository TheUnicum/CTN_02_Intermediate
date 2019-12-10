#include <conio.h>

int main()
{
	// Char literal
	_putch('P');
	_putch('u');
	_putch('b');
	_putch('e');
	_putch('s');

	_putch(80);
	_putch(117);
	_putch(98);
	_putch(101);
	_putch(115);
	_putch(33);

	while (!_kbhit());
	return 0;
}
