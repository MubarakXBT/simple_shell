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
	char *argv[4];


	while (true)
	{
		prompt();
		buffer = getlyne();
		*argv = parser(buffer);
		printf("we outsid\n");
		while (*argv++)
		{
			printf("%s", *argv);
		}
	}
	return (0);
}
