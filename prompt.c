#include <stdio.h>
#include "main.h"
/**
 */
void prompt(void)
{
	printf("$ ");
}

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
/**
 */
int main(void)
{
	int res;
	char* buffer;
	char q[] = "exit";


	while (true)
	{
		prompt();
		buffer = getlyne();
		
		res = strncmp(buffer, q, 4);
		if (res == 0)
		{
			exit(1);
		}
		else
			parser(buffer);
	}
	return (0);
}
