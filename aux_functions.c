#include "main.h"

/**
* spaces_count - function that counts spaces in a given string
* @buffer: string
* Return: number of spaces
*/

int spaces_count(char *buffer)
{
	size_t count = 0;
	int i = 0;

	while (buffer[i] != '\0')
	{
		if (buffer[i] == 32)
		{
			if (buffer[i + 1] == 32)
			{
				i++;
				continue;
			}
			else
			{
				count++;
				i++;
			}
		}
		else
			i++;
	}
	count += 2;
	return (count);
}

/**
* colons_count - function that counts colons of a given string
* @path: string
* Return: number of colons
*/

int colons_count(char *path)
{
	size_t count = 0;
	int i = 0;

	while (path[i] != '\0')
	{
		if (path[i] == 58)
		{
			count++;
			i++;
		}
	}
	return (count);
}

/**
*genv - getting environment var
*Return: 0
*/
int genv(void)
{
	char **i = environ;

	while (!*i)
	{
		printf("%s\n", *i);
	}
	return (0);
}

