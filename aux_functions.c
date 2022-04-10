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
			count++;
			i++;
		}
	}
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
