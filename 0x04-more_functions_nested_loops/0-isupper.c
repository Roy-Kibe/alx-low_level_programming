#include "main.h"

/**
  * main prints out letters in uppercase
  *return 0 when lowercase
  */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (0);
	else
		return (1);
}
