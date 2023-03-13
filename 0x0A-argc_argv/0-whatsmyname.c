#include <stdio.h>

/**
  *main - Prints the program name, followed by new line.
  *@argc: Number of arguments provided.
  *@argv: array of pointers to argument.
  *
  *Return: always 0.
  */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
