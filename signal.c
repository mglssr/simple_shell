#include "main.h"

/**
* ig_ctrlc - function
* @signal: signal recived
*/
void ig_ctrlc(int signal)
{
	if (signal == SIGINT)
	{
		write(1, "\n", 2);
		prompt2();
	}
}
