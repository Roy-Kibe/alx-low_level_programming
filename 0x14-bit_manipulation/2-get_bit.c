#include <stdio.h>
#include "main.h"

/**
  * get_bit - function that returns the value of a bit in a given index.
  * @n: number to extract bit.
  * @index: index of bit to get.
  * Return: value if success. -1 if fail.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value = (n >> index) & 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (value);
}
