#include "main.h"

/**
* _strtok - function that tokenize a given string
* @buffer: string
* Return: a double pointer
*/

char **_strtok(char *buffer)
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
				free(token);
				free(buffer);
				return(NULL);
			}
		token = strtok(NULL, delim);
		i++;
	}
	/**free(argv);
	free(buffer);*/

	argv[i] = NULL;
	return (argv);
}
