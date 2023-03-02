#include "main.h"

/**
  *string_toupper - changes all lowercases to uppercase in a string
  *@s: string to modify
  *return: resulting string
  */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}

	return (s);
}
