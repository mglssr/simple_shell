#include "main.h"

/**
*_strlen - calculate the length of a string
*@s: string
*Return: length of the string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
*_strdup - function that returns a pointer to a newly allocated
*space in memory, which contains a copy of the string given as a parameter.
*@str: string
*Return: Returns NULL if str = NULL
*On success, the _strdup function returns a pointer to the
*duplicated string. It returns NULL if insufficient memory was available
*
*/
char *_strdup(char *str)
{
	int j = 0;
	int i = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	p = malloc((sizeof(char) * i + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

/**
*_strcmp - function that compares two strings.
*@s1: string1
*@s2: string2
*Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0'; i++)

		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);

	if (s2[i] != '\0')
		return (s1[i] - s2[i]);

	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
