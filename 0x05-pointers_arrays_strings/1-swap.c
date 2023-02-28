#include "main.h"

/**
  *swap_int - functions to swap integers
  *a is integer one
  *b is integer two
  *return:no return
  **/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
