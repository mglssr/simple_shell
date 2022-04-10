#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

/**
* struct tokens - single linked list of tokens
* @str: string
* @len: length ofte string
* @next: points to the next node
*
* Description: linked list of tokens
*/
typedef struct tokens
{
char *str;
unsigned int len;
struct tokens *next;
} token_s;

int execmd(char **argv);
int genv(void);
int prompt(void);
int prompt2(void);
int execmd(char **argv);
int exittCD(void);
int genv(void);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int _putchar(char c);

#endif
