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
	char **argv;
	pid_t child_pid;
	/**int i = 0;*/

	while (1)
	{
		prompt();
		getline(&buffer, &buffersize, stdin);

		if (buffer[0] == '\n')
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
		printf(" pid del padre [%u] \n", getpid());
		/**aca va lo del path*/
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return(1);
		}
		else if (child_pid == 0)
		{
			printf("pid del hijo [%u]\n", getpid());
			execve(argv[0], argv, NULL);
			free(argv);
		}
		else
			wait(NULL);
	free(argv);
	free(buffer);
	}
	return (0);
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
	return (0);
}

/**
*prompt - shell start + prompt without printf
*Return: 0
*/
int prompt2(void)
{
    write(1, "Nax$ ", 5);
	return (0);
}
