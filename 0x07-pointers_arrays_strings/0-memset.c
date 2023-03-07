#include "main.h"

/**
  * _memset- fills memory with constant byte
  *@s: memory area
  *@b; constant byte
  *@n: content to be written
  *
  *Return: returns a pointer to memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + 1) = b;

	return (s);
}
