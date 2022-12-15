#include <stdio.h>

/**
 * main - prints all alphabets
 * new line
 * Return: Always 0 success
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
