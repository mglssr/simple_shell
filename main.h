#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>

int execmd(char **argv);
int genv(void);
extern char **environ;
int prompt(void);
int prompt2(void);
int execmd(char **argv);
int exittCD(void);
int genv(void);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _putchar(char c);
char **_strtok(char *buffer);
int spaces_count(char *buffer);
int colons_count(char *path);

#endif
