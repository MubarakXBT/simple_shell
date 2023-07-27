#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 */
char* parser(char* buffer)
{
	char* found;
	char *argv[4];
	int i = 1;

	printf("Here: %s\n", buffer);
	found = strtok(buffer, " ");
	while (found)
	{
		argv[i] = found;
		found = strtok(NULL," ");
		i++;
	}

	return (*argv);
}
