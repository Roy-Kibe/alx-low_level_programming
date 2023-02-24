#include "main.h"

/**
  *check digits between 0 and 9
  *if digit return 0
  *else return 1
  */

int _isdigit(int c)
{
	if (c >=0  && c <=9)
		return (1);
	else
		return (0);
}
