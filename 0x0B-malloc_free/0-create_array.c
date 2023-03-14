#include "main.h"
#include <stdlib.h>

/**
  *create_array - creates an array of char
  *@size: size of arrays created
  *@c: character to initialize array
  *
  *Return: return pointer to created array and NULL in case of failure.
  */

char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	ptArray = malloc(size * sizeof(char));

	if (ptArray == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)

	{
		ptArray[count] = c;
	}
	return (ptArray);
}
