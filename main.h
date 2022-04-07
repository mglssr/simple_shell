#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <stdib.h>


/**
* struct token_s - single linked list of tokens
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


#endif
