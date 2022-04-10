#include "main.h"

/**
*main - program that prints "$ ", wait for the user to enter a command
*prints it on the next line.
*function that splits a string and returns an array of each word of the string.
*/
int main(void)
{
	size_t buffersize = 0;
	char *buffer = NULL;
	const char sp[] = " \n\t";
	char *tok = NULL;
	char *argv[];
	int i = 0;

	while (1)
	{
		prompt();
		getline(&buffer, &buffersize, stdin);

		if (buffer == '\n')
			continue;

		if (_strcmp(buffer, "env") == 0)
		{
			genv();
		}
		else if(_strcmp(buffer, "exit") == 0)
		{
			free(buffer);
			break;
		}
		else
		{
			argv = _strtok(buffer);
		}

		execmd(argv);
		free(tok);
	}
	free(buffer);
	return (buffersize);
}

/**
*prompt - shell start + prompt
*Return: 0
*/
int prompt(void)
{
	static int ftime = 1;

	if (ftime)
	{
		system("clear");
		sleep(0.1);
		printf("\033[0;31m*************************HELLO   USER*************************\n");
		sleep(1);
		printf("************************WELCOME TO NAX************************\n");
		sleep(1);
		printf("**************WE HOPE YOU HAVE A GOOD TIME CODING*************\n\033[0m");
		sleep(1);
		ftime = 0;
	}
	printf("\033[0;31mNax$ \033[0m");
}

/**
*prompt - shell start + prompt without printf
*Return: 0
*/
int prompt2(void)
{
    write(1, "Nax$ ", 5);
}
