#include <stdio.h>
/**
 * main - prints all single digit numbers
 * new line follows
 * Return: Always 0 success
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
