#include "main.h"

/**
  *_memcpy - copies memory area
  *@src: source
  *@dest: destination
  *@n: number of  bytes
  *Return: returns destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + 1) = *(src + 1);

	return (dest);
}
