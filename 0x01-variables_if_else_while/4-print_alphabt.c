#include <stdio.h>

/*main is entry point
  *
  */

int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);
		}
	}
	putchar('\n');
	return (0);
}


