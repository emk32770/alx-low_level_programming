#include "main.h"

/**
 * print_alphabet - prints alphabets in lower case
 * Return:0
 */

void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
