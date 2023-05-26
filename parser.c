#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 */
int parser(char* buffer)
{
	char* found;

	printf("Here: %s\n", buffer);
	found = strtok(buffer, " ");
	while (found)
	{
		printf("%s\n", found);
		found = strtok(NULL," ");
	}

	return (0);
}
