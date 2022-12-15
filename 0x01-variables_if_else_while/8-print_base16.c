#include <stdio.h>

/**
 * main - prints numbers of base 16
 * new line
 * Return: always 0 success
 */
int main(void)
{
	int x;
	char y;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
