#include "main.h"

/**
<<<<<<< HEAD
* _strtok - function that tokenize 
=======
* sepcount - function that counts spaces between a string of arguments
>>>>>>> cd1ac36c4ca8a7aeb444720fc0df26dbb5f5e6e5
* @buffer: stringof arguments
* Return: the number of spaces between arguments, plus 2
*/

<<<<<<< HEAD
char **_strtok(char *buffer)
=======
int sepcount(char *buffer)
>>>>>>> cd1ac36c4ca8a7aeb444720fc0df26dbb5f5e6e5
{
	char **argv;
	char *token;
	char *delim = " \t\n";
	size_t nmemb = 0;
	int i = 0;

	nmemb = spaces_count(buffer);
	argv = calloc(nmemb, sizeof(char*));

	token = strtok(buffer, "\n");
	token = strtok(buffer, delim);
	
	while(token != NULL)
	{
		argv[i] = token;

	if (argv == NULL)
		{
			free(argv);
			free(buffer);
			return(NULL);
		}
		token = strtok(NULL, delim);
		i++;
	}
	argv[i] = NULL;
	return (argv);
