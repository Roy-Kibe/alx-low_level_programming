#include <stdio.h>

/**
  *main - program prints number of arguments
  *@argc: counts number of arguments
  *@argv: array of pointers listing all arguments.
  *
  *Return: Always 0.
  */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
