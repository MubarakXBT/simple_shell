#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * getlyne - a function that accept input from user
 *
 * Return: buffer(memory) to the inputs
 */

char *getlyne(void)
{
	char *buffer;
	size_t bufsize = 32;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate");
		exit(1);
	}
	getline(&buffer, &bufsize, stdin);
	return (buffer);
}
