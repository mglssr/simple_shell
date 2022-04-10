/**
*execmd - execute command
*@argv: str command
*Return: 0
*/
int execmd(char **argv)
{
    pid_t pid;

    pid = fork();
    if (pid < 0)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        execve(argv[0], argv, NULL);
    }
    else
    {
        wait(NULL);
    }

    return (0);
}

/**
*gevn - getting environment var
*Return: 0
*/
int genv(void)
{
    extern char **environ;
    char **i = environ;

    while (!*i)
    {
        printf("%s\n", *i);
    }
    return (0);
}

/**
*/
char *get_env(const char *name)
{
        int i;
        size_t l = strlen(name);
        if (!environ || !*name || strchr(name, '='))
                return (NULL);
        for (i = 0; environ[i] && (strncmp(name, environ[i], l) || environ[i][l] != '='); i++);
        if (environ[i])
                return (environ[i] + l + 1);
        return (NULL);
}

/**
 * gpath - Function that gets the path of a variable
 *
 *
 *
 */
char *gpath(char *command)
{
        char *path, *value, *var, *var2;
        struct stat st;
        path = get_env("PATH");
        value = strtok(path, ":");
        while (value != NULL)
        {
                var = strcat(value, "/");
                var2 = strcat(var, command);
                if (stat(var2, &st) == 0)
                {
                        free(var);
                        free(path);
                        return (var2);
                }
                value = strtok(NULL, ":");
                free(var2);
        }
        free(var);
        free(path);
        return (NULL);
}
