#include <stdio.h>

/**
* main - assigns random number
* new line then
* Return: Always 0 (sucess)
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
