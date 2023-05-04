#include <stdio.h>
#include "main.h"

/**
  * clear_bit - Function that sets value of bit indexed to 0.
  * @index: position of the bit we want to set to zero.
  * @n: pointer to the long int.
  * Return: 1 if successful, -1 in case of failure.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int)) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
