#include <stdio.h>

/**
  *main - program prints all arguments it recieves.
  *@argc: counts arguments passed.
  *@argv: array of pointers to arguments.
  *
  *Return: Always 0
  */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)

	{
		printf("%s\n", argv[arg]);
	}
	return (0);
}
