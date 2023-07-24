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


	while (true)
	{
		prompt();
		buffer = getlyne();
		parser(buffer);
	}
	return (0);
}
