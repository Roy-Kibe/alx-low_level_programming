#include <stdio.h>
#include "main.h"

/**
  * flip_bits - function that returns bits needed to flip a n to m.
  * @n:number to find bits required
  * @m: number to be converted to.
  * Return: number of bits required.
  *
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int xor_value = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = xor_value >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
