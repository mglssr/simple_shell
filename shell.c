#include "main.h"

/**
*main - program that prints "$ ", wait for the user to enter a command
*prints it on the next line.
*function that splits a string and returns an array of each word of the string.
*Return: 0
*/
int main(void)
{
	size_t buffersize = 0;
	char *buffer = NULL, **argv;
	pid_t child_pid;
	int i = 0, status = 0;

	while (1)
	{
		signal(SIGINT, ig_ctrlc);
		prompt2();
			
		i = getline(&buffer, &buffersize, stdin);
		if (i == -1)
			break;
		if (buffer[0] == '\n')
			continue;
		
		argv = _strtok(buffer);
		if (_strcmp(argv[0], "exit") == 0)
		{
			free(argv);
			free(buffer);
			exit(0);
		}
		if (_strcmp(argv[0], "env") == 0)
			genv();
		/**aca va lo del path*/
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		else if (child_pid == 0)
		{
			execve(argv[0], argv, NULL);
			free(argv);
		}
		else
		{
			wait(&status);
			free(argv);
		}
	}
	free(buffer);
	return (0);
}

/**
*prompt2 - shell start + prompt without printf
*Return: 0
*/
int prompt2(void)
{
	if (isatty(STDIN_FILENO) == 1)
		write(1, "Nax$ ", 5);
	return (0);
}
