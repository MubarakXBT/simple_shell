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
/**
 */
int main(void)
{
	while (true)
	{
		prompt();
		getlyne();
	}
	return (0);
}
