#include <stdio.h>
#include "main.h"

/**
  * set_bit - function to set the value of a bit to 1.
  * @n: pointer to the long integer.
  * @index: index of bit to set.
  *
  * Return: if successful 1, in case of error -1.
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
