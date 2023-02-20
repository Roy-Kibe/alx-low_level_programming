#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	for (i = 0; i < 10; i++ )
	{
		putchar ('0' + i);
	}

	char c;
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}

	putchar ('n');
	return (0);
}
