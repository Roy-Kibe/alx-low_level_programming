#include <stdio.h>
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *fp = fopen(filename, "r");
	
	if (fp == NULL)
	{
		return (0);
	}

	char buffer[1024];
	size_t read = 0;

	while (read < letters && !feof(fp))
	{
		size_t rem = letters - read;
		size_t read_size = rem < sizeof(buffer) ? rem : sizeof(buffer);
		size_t num_read = fread(buffer, sizeof(char), read_size, fp);
		if (num_read < read_size)
		{
			break;
		}

		size_t written;
		written = fwrite(buffer, sizeof(char), num_read, stdout);
		if (written != num_read)
		{
			fclose(fp);
			return (ssize_t)0;
		}
		read += num_read;
	}

	fclose(fp);
	return (ssize_t)read;
}

